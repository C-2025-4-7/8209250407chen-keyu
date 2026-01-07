#include <iostream>
using namespace std;

class Point {
private:
    int x;  // x坐标
    int y;  // y坐标

public:
    // 构造函数：初始化坐标为(60,80)
    Point() : x(60), y(80) {}
    
    // 设置坐标值的成员函数
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }
    
    // 显示坐标值的成员函数
    void display() {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

int main() {
    system("chcp 65001>nul");
    // 定义对象，验证构造函数初始化
    cout << "\n创建对象，验证构造函数初始化：" << endl;
    Point p1;
    cout << "初始坐标：";
    p1.display();  // 应该输出 (60,80)
    
    // 验证setPoint函数
    cout << "\n验证setPoint函数和display函数：" << endl;
    cout << "调用 setPoint(10, 20) 后：" << endl;
    p1.setPoint(10, 20);
    cout << "修改后坐标：";
    p1.display();  // 应该输出 (70,100)

    system("pause");
    return 0;
}