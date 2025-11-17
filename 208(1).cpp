#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

int main() {
      system("chcp 65001>nul"); 
      double a;
      start:cout << "请输入a值：";
      cin >> a;
      if (a == 0) {
        cout << 0 << endl;
    }
      if (a < 0) {
        cout << "请输入大于等于0的数！" << endl;
        goto start;
    }
    double xn = a;
    double xn_1;
    do {
        xn_1 = 1.0/2 * (xn + a / xn);
        if (fabs(xn_1 - xn) < 1e-5) {
            break;
        }
        xn = xn_1;
    } while (1);
    cout << fixed << setprecision(5) << xn_1 << endl;//fixed强制让输出时小数位为后面设置的位数
    system("pause");
    return 0;
}
