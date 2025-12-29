#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
    int result = 0;
    int len1 = 0,len2 = 0;
    int i = 0,j = 0;
    while (s1[len1]!='\0'){len1++;}
    while (s2[len2]!='\0'){len2++;}
    
    if (len1>len2)
    {
        return -1;
    }
    if (len1==0)
    {
        return 0;
    }
    if (len1<=len2)
    {
        for (int i = 0; i <= len2-len1; i++)
        {
            if (s2[i] == s1[0])
            {
                bool found = true;
                for (int j = 0; j < len1; j++)
                {
                    if (s2[i+j]!=s1[j])
                    {
                        found = false;
                        break;
                    }   
                }
                if (found)
                {
                    return i;
                } 
            }   
        }
    }
    return 0;
}

int main(){
    system("chcp 65001>nul");  
    const int MAX_SIZE = 1000;
    char s1[MAX_SIZE], s2[MAX_SIZE];
    
    cout << "请输入子串: ";
    cin.getline(s1, MAX_SIZE);
    
    cout << "请输入主串: ";
    cin.getline(s2, MAX_SIZE);
    cout << indexOf(s1,s2) << endl;

    system("pause");
    return 0;
}