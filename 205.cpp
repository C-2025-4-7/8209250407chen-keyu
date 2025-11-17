#include <iostream>
using namespace std;
int main() {
   system("chcp 65001>nul"); 
   string aaa;
   cout << "请输入一段文本：";
   getline(cin,aaa);
   int sum_alp=0,sum_dig=0,sum_space=0,sum_other=0;
   for (char ch : aaa)
   if (isalpha(ch)){
      sum_alp += 1;
   }else if (isdigit(ch)){
      sum_dig += 1;
   }else if (isspace(ch)){
      sum_space += 1;
   }else{
      sum_other += 1;
   }
   cout << "总字符数为：" << aaa.length() << ".\n";
   cout << "总数字数为：" << sum_dig << ".\n";
   cout << "总字母数为：" << sum_alp << ".\n";
   cout << "总空格数为：" << sum_space << ".\n";
   cout << "总其他符号数为：" << sum_other << ".\n";
   system("pause");
   return 0;
}
