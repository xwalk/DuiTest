@echo off
echo %1%
cd %1%/res
if exist "skin.zip" (del "skin.zip")
set rar="D:\Program Files\WinRAR\WinRAR.exe"
%rar% a -r -ep1 skin.zip ./
cd ../../