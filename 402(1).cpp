#include<iostream>
using namespace std;

void bubblesort(double a[])
{
    int n = 10;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]<a[j])
            {
                double temp = 0;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

}

int main(){
    system("chcp 65001>nul"); 
    double a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i] ;
    }
    bubblesort(a);
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] <<" ";
    }
     



    system("pause");
    return 0;
}