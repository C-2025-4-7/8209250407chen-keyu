#include <iostream>                             
using namespace std;                                    
int main()                                             
{ 
   system("chcp 65001>nul");   
   char aaa,bbb;                                               
   cout << "请输入一个字符：";
   cin >> aaa;
   if (65<=aaa and aaa<=90){
      cout << aaa+1 <<endl;
   }else{
      cout << char(aaa-32) << endl;//toupper输出的是int整型，所以前面要加char转化成字符型
   }             
   system("pause");   
   return 0;                                                    
}
