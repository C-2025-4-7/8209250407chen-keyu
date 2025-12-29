#include <iostream>
using namespace std;


void calculateGCDandLCM(int a, int b, int &gcd, int &lcm);

int main() {
    int m, n;
    

    cout << "请输入两个自然数m和n: ";
    cin >> m >> n;
    

    if (m <= 0 || n <= 0) {
        cout << "请输入正整数！" << endl;
        return 1;
    }
    
    int g, l;  
    

    calculateGCDandLCM(m, n, g, l);

    cout << m << "和" << n << "的最大公约数是: " << g << endl;
    cout << m << "和" << n << "的最小公倍数是: " << l << endl;
    
    return 0;
}


void calculateGCDandLCM(int a, int b, int &gcd, int &lcm) {
    int originalA = a;
    int originalB = b;

    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }

    gcd = a;
    

    lcm = originalA / a * originalB;
}