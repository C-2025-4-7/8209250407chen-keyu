#include<iostream>
using namespace std;

int main(){
    system("chcp 65001>nul");  
    int now = 1;
    int first_day = 0;
    int yesterday = 0;
    int times = 10-1;
    
    for (int i = 0; i < times; i++)
    {
        yesterday = (now+1)*2;
        now = yesterday;
    }
    
    first_day = yesterday;
    cout << "第一天有" << first_day << "个." << endl;

    system("pause");
    return 0;
}