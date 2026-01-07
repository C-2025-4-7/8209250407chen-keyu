#include<iostream>
using namespace std;

class Time             // 定义Time类
{
private:              
    int hour;
    int minute;
    int sec ;
public:
    void cin_time(int h,int m,int s){
        hour = h;
        minute = m;
        sec = s;
    }
    void cout_time(){
        cout<<hour<<":"<<minute<<":"<<sec<<endl ;   
    }
};
int main()
{
    Time t1;
    int h,m,s;
    cin>>h>>m>>s;
    t1.cin_time(h,m,s);
    t1.cout_time();
    system("pause");
    return 0;
}
