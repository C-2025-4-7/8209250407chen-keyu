#include <iostream>                               
using namespace std;
int max(int x,int y,int z)
{
   int m1,m2;
   if (x>y){
      m1 = x;
   }
   else{m1 = y;
   }
   if (m1>z){
      m2 = m1;
   }
   else{m2 = z;
   }
   return m2;
}                                    
int main()                                             
{ 
   system("chcp 65001>nul");   
   int a,b,c;
   cout << "请输入三角形的三边长：" ;
   cin >> a >> b >> c;
   if (a+b+c>2*max(a,b,c)){
      cout << "这可以构成一个三角形！";
      if (a==b||b==c||c==a){
         cout << "这是一个等腰三角形！";
      }
   }else{
      cout << "这不能构成三角形！";      
   }
   system("pause");   
   return 0;                                                    
}
