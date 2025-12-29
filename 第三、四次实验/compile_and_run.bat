@echo off
echo 正在编译温度转换程序...
echo ================================
g++ 303.cpp mytemperature.cpp -o 303.exe
if errorlevel 1 (
    echo 编译失败！
    pause
    exit /b 1
)
echo 编译成功！
echo ================================
.\303.exe
echo ================================
pause