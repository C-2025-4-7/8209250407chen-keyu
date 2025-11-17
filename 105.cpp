 #include <iostream>
#include <iomanip>
using namespace std;
int main() {
   system("chcp 65001>nul");
   double h;
   cout << "请输入华氏温度：";
   cin >> h;
   double s = 5.0 * (h - 32) / 9.0;
   cout << fixed << setprecision(2);
   cout << "摄氏温度 = " << s << "℃" << endl;
   system("pause");
   return 0;
}
