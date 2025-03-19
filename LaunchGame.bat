@echo off
cd /d "%~dp0"

set "newdll=x64\Release\dxgi.dll"
set "olddll=E:\JoJo\PC Port\AJB\Binaries\Win64\dxgi.dll"

move "%newdll%" "%olddll%"

start /b "" "E:\JoJo\PC Port\AJB\Binaries\Win64\AJB-Win64-Shipping.exe" "-log"
