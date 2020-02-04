@echo off
echo 请输入文件名
set /p b=
C:\Dev-Cpp\MinGW64\bin\gcc %b%.cpp -o x.exe
if exist  x.exe   echo 编译成功
if not exist   x.exe  echo 编译失败
pause






