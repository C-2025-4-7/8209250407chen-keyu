#include <iostream>
using namespace std;


int gcd(int a, int b);

int main() {
    int m, n;
    

    cin >> m >> n;
    

    if (m <= 0 || n <= 0) {
        cout << "请输入正整数！" << endl;
        return 1;
    }
    

    int result = gcd(m, n);
    

    cout << m << "和" << n << "的最大公约数是: " << result << endl;
    
    return 0;
}


int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}