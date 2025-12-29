#include<iostream>
using namespace std;
int parseHex(const char *const hexString)
{
    int result = 0;
    for (int i = 0; hexString[i] != '\0'; i++) 
    {
        char c = toupper(hexString[i]);  
        result *= 16;
        if (c >= '0' && c <= '9') {
            // 处理数字0-9
            result += c - '0';
        } else if (c >= 'A' && c <= 'F') {
            // 处理字母A-F
            result += 10 + (c - 'A');
        } else {
            // 非法字符，可以返回-1表示错误
            return -1;
        }
    }
    
    return result;
}
int main()
{
    system("chcp 65001>nul");  
    cout << parseHex("A5") << endl;

    system("pause");
    return 0;
}



