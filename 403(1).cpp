#include<iostream>
using namespace std;

int main(){
    system("chcp 65001>nul");  

    bool box[100] = {false};
    int count = 0;
    int x = 0;
    for (int i = count; i < 100; i++)
    {
        x = i;
        for (int j = x; j < 100; j+=(x+1))
        {
            if(box[j]==true)
            {
                box[j]=false;
            }
            else if(box[j]==false)
            {
                box[j]=true;
            }            
        }
        count++;
    }
    for (int i = 0; i < 100; i++)
    {
        if (box[i]==true)
        {
            cout << i+1 << " ";
        }
    }
    

    system("pause");
    return 0;
}