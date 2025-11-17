#include <iostream>                         
using namespace std;                                    
int main()                                             
{ 
   system("chcp 65001>nul");   
   float x,y;
   cin >> x;
   if (0<x<1){
      y = 3-2*x;
   }else if(1<=x<5){
      y = 2/(4.0*x) +1;
   }else if(5<=x<10){
      y = x*x;
   }
   cout << y << endl;
   system("pause");        
   return 0;                                                    
} 
