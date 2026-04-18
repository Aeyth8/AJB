#include "Aeyth8/A8CL/NTSurfer/NTSurfer.hpp"
#include "Aeyth8/Proxy8/Entry/ProxyEntry.hpp"
#include "Aeyth8/Logger.hpp"

#undef IMAGE_ORDINAL_FLAG

extern void LogImports()
{
	Logger::DebugLog("LogImports", "Begin");

	NTS::PPEB PEB = NTS::NTSurfer::UsePEB(Proxy8::PEB);
	maxword BaseAddress = Proxy8::GBA;

	NTS::PPEB_LDR_DATA DataTable = PEB->Ldr;
	NTS::PLIST_ENTRY Entry = DataTable->InMemoryOrderModuleList.Flink;

	NTS::PIMAGE_DATA_DIRECTORY ImportDirectory = NTS::NTSurfer::GetDataDirectory(BaseAddress, 1);
	// NTS::NTSurfer::GetImportDirectory(BaseAddress);

	dword DescriptorStartRVA = ImportDirectory->VirtualAddress;
	NTS::PIMAGE_IMPORT_DESCRIPTOR Descriptor = reinterpret_cast<NTS::PIMAGE_IMPORT_DESCRIPTOR>(DescriptorStartRVA + BaseAddress);

	dword i{ 0 };
	while (Descriptor[i].Characteristics != 0)
	{
		char* NameOfDLL = reinterpret_cast<char*>(Descriptor[i].Name + BaseAddress);

		NameOfDLL ? Logger::DebugLog("LogImports", NameOfDLL) : Logger::DebugLog("LogImports", "BRUH");
		if (!NameOfDLL) continue;

		NTS::IMAGE_THUNK_DATA* ImportLookupTable = reinterpret_cast<NTS::IMAGE_THUNK_DATA*>(Descriptor[i].OriginalFirstThunk + BaseAddress);
		NTS::IMAGE_THUNK_DATA* ImportAddressTable = reinterpret_cast<NTS::IMAGE_THUNK_DATA*>(Descriptor[i].FirstThunk + BaseAddress);

		if (!ImportLookupTable || !ImportAddressTable)
		{
			Logger::DebugLog("LogImports", "NULL IAT OR ILT!");
			++i;
			continue;
		}

		dword LookupIdx{ 0 };
		while (ImportLookupTable[LookupIdx].AddressOfData != 0)
		{
			if (ImportLookupTable[LookupIdx].Ordinal & NTS::IMAGE_ORDINAL_FLAG)
			{
				Logger::DebugLog(NameOfDLL, "Ordinal " + std::to_string(ImportLookupTable[LookupIdx].Ordinal & 0xFFFF));
			}
			else
			{
				NTS::PIMAGE_IMPORT_BY_NAME ImportByName = reinterpret_cast<NTS::PIMAGE_IMPORT_BY_NAME>(ImportLookupTable[LookupIdx].AddressOfData + BaseAddress);
				NTS::PIMAGE_IMPORT_BY_NAME ImportByAddress = reinterpret_cast<NTS::PIMAGE_IMPORT_BY_NAME>(ImportAddressTable[LookupIdx].AddressOfData + BaseAddress);

				if (ImportByName && ImportByName->Name)
				{
					Logger::DebugLog(NameOfDLL, (char*)ImportByName->Name);

					maxword FunctionAddress = ImportAddressTable[LookupIdx].Function;

					{
						maxword Index{0};
						byte* FunctionBytes = reinterpret_cast<byte*>(FunctionAddress);

						while (FunctionBytes[Index] != 0xC3) ++Index;
						
						Logger::Log << "[Address]: " << std::hex << FunctionAddress << " || [Function Size]: " << std::to_string(Index) << '\n';

						// ADD IMPORT BLACKLIST BASED ON QWORD STRING COMPARISON,  FunctionAddress + Index is RET
					}
					

					
					//Logger::Log << "[Address]: " << std::hex << ImportAddressTable[ImportByName->Hint].Function << '\n';
					//Logger::Log << "[Address]: " << std::hex << (&ImportLookupTable[LookupIdx] - BaseAddress) << '\n';
				}
				else
				{
					Logger::DebugLog(NameOfDLL, "NULLPTR!");
				}
			}

			LookupIdx++;
		}

		Logger::Log.flush();

		i++;
	}

	/*if (ImportDirectory->VirtualAddress == 0)
	{
		Logger::DebugLog("LogImports", "NO IMPORT");
	}
	else
	{
		Logger::DebugLog("LogImports", "Beginning to parse..");
		NTS::PIMAGE_IMPORT_DESCRIPTOR ImportDescriptor = reinterpret_cast<NTS::PIMAGE_IMPORT_DESCRIPTOR>(BaseAddress + ImportDirectory->VirtualAddress);
		
		while (ImportDescriptor->Name != 0)
		{
			NTS::IMAGE_THUNK_DATA* ImportLookupTable = reinterpret_cast<NTS::IMAGE_THUNK_DATA*>(BaseAddress + ImportDescriptor->OriginalFirstThunk);
			NTS::IMAGE_THUNK_DATA* ImportAddressTable = reinterpret_cast<NTS::IMAGE_THUNK_DATA*>(BaseAddress + ImportDescriptor->FirstThunk);

			while (ImportLookupTable->AddressOfData != 0)
			{
				NTS::PIMAGE_IMPORT_BY_NAME ImportByName = reinterpret_cast<NTS::PIMAGE_IMPORT_BY_NAME>(BaseAddress + ImportLookupTable->AddressOfData);
				Logger::DebugLog("LogImports", std::to_string(ImportByName->Name[0]));

				ImportLookupTable++;
				ImportAddressTable++;
			}

			ImportDescriptor++;
		}
	}*/

	/*while (Entry != &DataTable->InMemoryOrderModuleList)
	{
		NTS::LDR_DATA_TABLE_ENTRY* Module = CONTAINING_RECORD(Entry, NTS::LDR_DATA_TABLE_ENTRY, InMemoryOrderLinks);

		maxword BaseAddress = (maxword)Module->DllBase;

		NTS::PIMAGE_DATA_DIRECTORY ImportDirectory = NTS::NTSurfer::GetImportDirectory(BaseAddress);
		
		std::wcout << L"[DLL]: " << Module->FullDllName.Buffer << L" || [Base Address]: " << std::hex << BaseAddress << '\n';
		if (ImportDirectory->VirtualAddress == 0)
		{
			std::wcout << L"\bNO IMPORT\n";
			continue;
		}
		else
		{
			NTS::PIMAGE_IMPORT_DESCRIPTOR ImportDescriptor = reinterpret_cast<NTS::PIMAGE_IMPORT_DESCRIPTOR>(BaseAddress + ImportDirectory->VirtualAddress);
			while (ImportDescriptor->Name != 0)
			{
				char* DLLName = reinterpret_cast<char*>(BaseAddress + ImportDescriptor->Name);

				Logger::Log << "[DLL Name]: " << DLLName << '\n';

				NTS::IMAGE_THUNK_DATA* ImportLookupTable = reinterpret_cast<NTS::IMAGE_THUNK_DATA*>(BaseAddress + ImportDescriptor->OriginalFirstThunk);
				NTS::IMAGE_THUNK_DATA* ImportAddressTable = reinterpret_cast<NTS::IMAGE_THUNK_DATA*>(BaseAddress + ImportDescriptor->FirstThunk);

				while (ImportAddressTable->Function)
				{
					if (ImportAddressTable->Function & NTS::IMAGE_ORDINAL_FLAG)
					{
						Logger::Log << "[Function Ordinal]: " << std::hex << (ImportAddressTable->Function) << '\n';
					}
					else
					{
						NTS::PIMAGE_IMPORT_BY_NAME Import = reinterpret_cast<NTS::PIMAGE_IMPORT_BY_NAME>(BaseAddress + ImportLookupTable->AddressOfData);
						Logger::Log << "[Function]: " << Import->Name << " || [Address]: " << std::hex << (ImportAddressTable->Function & 0xFFFF) << '\n';
					}
					
					ImportAddressTable++;
					ImportLookupTable++;
				}
			}

			ImportDescriptor++;
		}


		Entry = Entry->Flink;
	}*/
}