@echo off
chcp 65001 >nul
echo ========================================
echo C++ 程序编译和运行工具
echo ========================================

REM 设置编译器和编译选项
set COMPILER=g++
set FLAGS=-g -Wall -std=c++11
set OUTPUT=101.exe

REM 显示当前目录信息
echo 当前目录: %CD%
echo.

REM 检查源文件是否存在
if not exist "main.cpp" (
    echo 错误: 找不到 main.cpp 文件!
    pause
    exit /b 1
)

if not exist "student.cpp" (
    echo 错误: 找不到 student.cpp 文件!
    pause
    exit /b 1
)

if not exist "student.h" (
    echo 错误: 找不到 student.h 文件!
    pause
    exit /b 1
)

echo 找到所有必需文件，开始编译...

REM 编译 main.cpp 和 student.cpp
echo 编译命令: %COMPILER% main.cpp student.cpp %FLAGS% -o %OUTPUT%
%COMPILER% main.cpp student.cpp %FLAGS% -o %OUTPUT%

REM 检查编译是否成功
if %ERRORLEVEL% equ 0 (
    echo.
    echo ========================================
    echo 编译成功！
    echo ========================================
    echo.
    
    REM 检查可执行文件是否生成
    if exist "%OUTPUT%" (
        echo 正在运行程序...
        echo.
        echo ========================================
        echo 程序输出:
        echo ========================================
        echo.
        
        REM 运行生成的可执行文件
        %OUTPUT%
        
        echo.
        echo ========================================
        echo 程序运行完毕！
        echo ========================================
    ) else (
        echo 错误: 可执行文件 %OUTPUT% 未生成!
    )
) else (
    echo.
    echo ========================================
    echo 编译失败！请检查错误信息。
    echo ========================================
)

REM 暂停以便查看输出
echo.
echo 按任意键关闭此窗口...
pause >nul