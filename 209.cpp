#include <iostream>
using namespace std;
int main() {
   system("chcp 65001>nul"); 
   int i = 1,apple = 0;
   do
   {
      i++;
      apple = apple + i*2;
   } while (apple <= 100);
   
   cout << "每天平均花费的价钱是：" << apple*0.8/i << " 元。" << endl;  
   system("pause");
   return 0;
}
