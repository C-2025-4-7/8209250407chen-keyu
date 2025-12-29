#include<iostream>
using namespace std;

int main(){
    system("chcp 65001>nul");  
    int pp = 0;
    int a[10];
    int b[10];
    int input_num = 0;
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        bool isNew = true;
        cin >> input_num;
        b[i] = input_num;
        for (int j = 0;j < i; j++)
        {
            if (b[j]==input_num)
            {
                isNew = false;
                break;
            }
        }
        if(isNew)
        {
            a[count] = input_num;
            count ++;
        }
    }
    for (int i = 0;i<count;i++)
    {
        pp = a[i];
        cout << pp << " ";
    }
    system("pause");
    return 0;
}