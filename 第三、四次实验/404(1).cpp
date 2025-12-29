#include<iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
    for (int i = 0; i < size1; i++)
    {
        list3[i] = list1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        list3[size1+i] = list2[i];
    }
    for (int i = 0; i < (size1+size2)-1; i++)
    {
        for (int j = i+1; j < (size1+size2); j++)
        {
            if (list3[i]>list3[j])
            {
                int temp = 0;
                temp = list3[j];
                list3[j] = list3[i];
                list3[i] = temp;
            }      
        }
    }   
}

int main(){
    system("chcp 65001>nul");  
    int size1,size2 = 0;
    int list1[80],list2[80],list3[80];
    cin >> size1;
    for (int i = 0; i < size1; i++)
    {
        cin >> list1[i];
    }
        cin >> size2;
    if ((size1+size2)>80||(size1+size2)<=0)
    {
        cout << "wrong!!!you must input at least 1 number." << endl;
    }
    else
    {
        for (int i = 0; i < size2; i++)
        {
            cin >> list2[i];
        }
        merge(list1,size1,list2,size2,list3);
        for (int i = 0; i < (size1+size2); i++)
        {
            cout << list3[i] << " ";
        }
    }  
    system("pause");
    return 0;
}