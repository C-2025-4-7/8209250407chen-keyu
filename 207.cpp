 #include <iostream>                               
using namespace std;
                                   
int main()                                             
{ 
   system("chcp 65001>nul");  
   int i = 0;
   for (i = 0; i < 5; i++)
   {
      switch (i)
      {
      case 0:
         cout << "\040\040\040\040*" << endl;
         break;
      case 1:
         cout << "\040\040\040**" << endl;
         break;
      case 2:
         cout << "\040\040***" << endl;
         break; 
      case 3:
         cout << "\040****" << endl;
         break;
      case 4:
         cout << "*****" << endl;
         break;       
      default:
         break;
      }
      cout << '\040' << endl;
   }
   system("pause");   
   return 0;                                                    
}  
