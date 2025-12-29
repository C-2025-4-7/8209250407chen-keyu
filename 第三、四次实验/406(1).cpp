#include<iostream>
#include<cstring>
using namespace std;
void count(const char s[], int counts[])
{
    for (int i = 0; s[i] != '\0'; i++) 
    {
        counts[s[i] - 'a']++;
    }
}

int main(){
    system("chcp 65001>nul");  

    char s[1000];
    int counts[26] = {0};
    cin.getline(s,1000);

    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        s[i] = tolower(s[i]);
    }
    count(s,counts);
    
    cout << "\n统计结果：" << endl;
    for (int i = 0; i < 26; i++) 
    {
        if (counts[i] > 0) 
        {
            cout << (char)('a' + i) << " 出现了 " << counts[i] << " 次" << endl;
        }
    }

    system("pause");
    return 0;
}