#include<iostream>   
#include<cmath>  
#define PI 3.1415926              
using namespace std;                 
int main()                          
{  
   system("chcp 65001>nul");                               
   int r = 1,h = 1; 
   cout << "Please input the r:" << endl;                           
   cin >> r;
   cout << "Please input the h:" << endl;                      
   cin >> h;                                            
   cout<<"The V is: " << (r*r*h*PI) <<endl;  
   system("pause");  // 或 cin.get();  
   return 0;                      
}  
