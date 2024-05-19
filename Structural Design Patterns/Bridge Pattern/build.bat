@echo off
cls

del *.exe

del *.obj

setlocal enabledelayedexpansion

for /F "usebackq tokens=*" %%i in (`cd`) do (
    set directory=%%i
)

echo %directory%

rem Prompt the user for the name of the executable
set /p exeName="Enter the name of the executable (without extension): "

rem Check if the user entered a name
if "%exeName%"=="" (
    echo No name provided. Exiting.
    exit /b 1
)

set "fileList="

rem Loop through each file in the directory
for %%f in ("%directory%\*.cpp") do (
    rem Append the file name to the variable
    set "fileList=!fileList! %%~nxf"
)

Cl /EHsc %fileList% /Fe%exeName%

endlocal