#include <iostream>
using namespace std;
int main() {
   system("chcp 65001>nul"); 
   int a,b,sum;
   char m;
   cout << "请开始使用计算器：";
   cin >> a >> m >> b;
   switch (m)
   {
   case '+':
      {sum = a+b;
      cout << "结果是：" << sum << endl;}
      break;
   case '-':
      {sum = a-b;
      cout << "结果是：" << sum << endl;}
      break;
   case '*':
      {sum = a*b;
      cout << "结果是：" << sum << endl;}
      break;
   case '/':
      {if (b != 0){
         sum = a/b;
         cout << "结果是：" << sum << endl;
      }
         else{
         cout << "除数不能为0！" << endl;            
         }
      }
      break;
   case '%':
      {sum = a%b;
      cout << "结果是：" << sum << endl;}
      break;
   
   default:cout << "输入错误！" << endl;
      break;
      ;
   }
   system("pause");
   return 0;
}
