//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include "student.h"            //不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
{
    std::cout<<"num:"<<num<<std::endl;
    std::cout<<"name:"<<name<<std::endl;
    std::cout<<"sex:"<<sex<<std::endl;
}
void Student::set_value(int x,char y[20],char z)
{
    num = x;
    for (int i = 0; i < 20; i++)
    {
        name[i] = y[i];
    }
    sex = z;    
}