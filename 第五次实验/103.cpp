#include <iostream>
using namespace std;

class Cuboid {
private:
    double length;
    double width;
    double height;

public:
    void input() {
        double l, w, h;
        cin >> l >> w >> h;
        length = l;
        width = w;
        height = h;
    }  // 输入功能
    
    double calculateVolume() {  // 计算功能
        return height * width * length;
    }
    
    void showVolume() {  // 输出功能
        cout << "The Volume is " << calculateVolume() << endl;
    }
};

int main() {
    Cuboid c1, c2, c3;
    c1.input();
    c2.input();
    c3.input();
    c1.showVolume();
    c2.showVolume();
    c3.showVolume();
    system("pause");
    return 0;
}