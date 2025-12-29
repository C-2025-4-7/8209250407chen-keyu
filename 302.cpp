#include <iostream>
using namespace std;

bool is_prime(int num)
{
    int i = 0;
    for ( i = 2; i < num; i++)
    {
        if (num%i==0){
            return false;
        }  
    }   
    return true;
}

int main() {
    int count = 0;
    int num = 2; 
    
    cout << "前200个素数：" << endl;
    
    while (count < 200) {
        if (is_prime(num)) {
            cout << num << '\t';
            count++;
            if (count % 10 == 0) {
                cout << endl;
            }
        }
        num++;
    }
    system("pause");
    return 0;
}
