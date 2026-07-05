

typedef unsigned long long TSize;

template <class TKey, class TValue>
struct TPair
{
    TKey     Key;
    TValue   Value;
};

template <class TKey, class TValue, TSize Size>
struct TDictionary
{
    const TPair<TKey, TValue>*    Array;

    constexpr TDictionary(const TPair<TKey, TValue>(&Dictionary)[Size]) : Array(Dictionary) {};

    constexpr const TPair<TKey, TValue>* FindPair(TKey Key) const
    {
        for (TSize i{0}; i < Size; ++i)
        {
            if (Array[i].Key == Key)
            {
                return &(Array[i]);
            }
        }

        return nullptr;
    }

    constexpr const TPair<TKey, TValue>* FindPair(TValue Value) const
    {
        for (TSize i{0}; i < Size; ++i)
        {
            if (Array[i].Value == Value)
            {
                return &(Array[i]);
            }
        }

        return nullptr;
    }

    constexpr const TValue Find(TKey Key) const
    {
        const TPair<TKey, TValue>* Result = this->FindPair(Key);
        return Result ? Result->Value : nullptr;
    }

    constexpr const TKey Find(TValue Value) const
    {
        const TPair<TKey, TValue>* Result = this->FindPair(Value);
        return Result ? Result->Key : nullptr;
    }

    
};

/*
typedef unsigned long long TSize;

template <class TKey, class TValue>
struct TPair
{
    TKey     Key;
    TValue   Value;
};

template <class TKey, class TValue>
struct TDictionary
{
    TPair<TKey, TValue>*    Array;
    TSize                   ArraySize;

    template <TSize Size>
    TDictionary(const TPair<TKey, TValue>(&Dictionary)[Size])
    {
        this->Array = new TPair<TKey, TValue>[Size];
        this->ArraySize = Size;

        TSize i{0};
        while (i < Size)
        {
            this->Array[i] = Dictionary[i];
            ++i;
        }
    };

    ~TDictionary()
    {
        this->ArraySize = 0;
        delete[] this->Array;
    }

    TPair<TKey, TValue>* Find(TKey Key)
    {
        for (TSize i{0}; i < ArraySize; ++i)
        {
            if (Array[i].Key == Key)
            {
                return &Array[i];
            }
        }

        return nullptr;
    }

    TPair<TKey, TValue>* Find(TValue Value)
    {
        for (TSize i{0}; i < ArraySize; ++i)
        {
            if (Array[i].Value == Value)
            {
                return &Array[i];
            }
        }

        return nullptr;
    }
};
*/

namespace A8CL
{
namespace SDT
{
    constexpr const char* ESelectedCharacter[] = { "Invalid", "Jotaro", "Kakyoin", "Bucciarati", "Mista", "Koichi", "Rohan", "Josuke", "Polnareff", "Giorno", "Hol Horse", "Dio", "Kira", "Narancia", "Dio [Greatest High]", "Okuyasu", "Risotto", "Diavolo", "Jolyne", "Weather Report", "Jotaro Stone Ocean", "Anasui", "Fugo", "Avdol", "Kosaku", "Abbacchio", "Joseph", "Caesar", "Pucci", "Jonathan", "Dio Brando [P1]" };
    constexpr const wchar_t* ESelectedCharacterW[] = { L"Invalid", L"Jotaro", L"Kakyoin", L"Bucciarati", L"Mista", L"Koichi", L"Rohan", L"Josuke", L"Polnareff", L"Giorno", L"Hol Horse", L"Dio", L"Kira", L"Narancia", L"Dio [Greatest High]", L"Okuyasu", L"Risotto", L"Diavolo", L"Jolyne", L"Weather Report", L"Jotaro Stone Ocean", L"Anasui", L"Fugo", L"Avdol", L"Kosaku", L"Abbacchio", L"Joseph", L"Caesar", L"Pucci", L"Jonathan", L"Dio Brando [P1]" };
	
    constexpr const char* EPlayMode[] = {"None", "Solo", "Pair", "Shop", "ShopCompetition", "Tutorial", "Training", "ShopCompetitionPair", "ShopExchange", "PVESolo", "PVEPair", "EPlayMode_MAX"};
    constexpr const wchar_t* EPlayModeW[] = {L"None", L"Solo", L"Pair", L"Shop", L"ShopCompetition", L"Tutorial", L"Training", L"ShopCompetitionPair", L"ShopExchange", L"PVESolo", L"PVEPair", L"EPlayMode_MAX"};

    constexpr TPair<int, const char*> EDamageAreaType_Entries[] =
    {
        {7,     "Morioh Town (Trattoria Trussardi)"},
        {2,     "Morioh Town (Train Station)"},
        {3,     "Morioh Town (Angelo Rock)"},
        {4,     "Morioh Town (Rural)"},
        {5,     "Morioh Town (Owson)"},
        {6,     "Morioh Town (Kameyu)"},
        {8,     "Cairo"},
        {9,     "Farm"},
        {10,    "Colosseum"},
        {11,    "Venezia"},
        {101,   "Dealer's Challenge [PvE]"},
    };

    constexpr TDictionary<int, const char*, sizeof(EDamageAreaType_Entries) / sizeof(EDamageAreaType_Entries[0])> EDamageAreaType = {EDamageAreaType_Entries};
    
}
}