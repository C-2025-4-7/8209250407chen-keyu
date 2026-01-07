//main.cpp                      主函数模块
#include <iostream>             //将类声明头文件包含进来
using namespace std;
#include "student.h"
int main()
{
    Student stud;             //定义对象
    int num;
    char name[20];
    char sex;
    cin>>num;
    cin>>name;
    cin>>sex;
    stud.set_value(num,name,sex);
    stud.display();              //执行stud对象的display函数
    system("pause");
    return 0;
}
