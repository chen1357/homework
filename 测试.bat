@echo off
echo 请输入需要测试的函数
set /p a=
C:\Dev-Cpp\MinGW64\bin\gcc %a%.cpp -o %a%.exe
%a%
pause