#include <iostream>                               
using namespace std;                            
int main()                                             
{ 
   system("chcp 65001>nul");  
   int a,b,c,d;//a,b为输入的数字，c为较大者，d为较小者；
   cout << "请输入两个数字：";
   cin >> a >> b;
   c = a>b?a:b,d = a+b-c;
   int i;
   do
   {
      i = c%d;
      c = d;
      d = i;
   } while (d != 0);
   
   cout << "a和b的最大公约数是：" << c << endl;
   cout << "a和b的最小公倍数是：" << a*b/c << endl;
   system("pause");   
   return 0;                                                    
} 
