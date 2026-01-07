#include <iostream>
using namespace std;

class Student {
private:
    int id;        // 学号
    double score;  // 成绩
public:
    // 输入学生信息
    void input() {
        cout << "请输入学号和成绩：";
        cin >> id >> score;
    }
    // 获取成绩（供max函数使用）
    double getScore() const {
        return score;
    }
    // 获取学号（供max函数使用）
    int getId() const {
        return id;
    }
};

// max函数：找出最高成绩者并输出学号
void max(Student * students, int size) {
    if (size <= 0) {
        cout << "数组为空！" << endl;
        return;
    }
    // 假设第一个学生是最高成绩者
    int maxIndex = 0;
    double maxScore = students[0].getScore();
    // 遍历数组，寻找最高成绩
    for (int i = 1; i < size; i++) {
        if (students[i].getScore() > maxScore) {
            maxScore = students[i].getScore();
            maxIndex = i;
        }
    }
    // 输出最高成绩者的学号
    cout << "最高成绩者的学号是：" << students[maxIndex].getId() << endl;
    cout << "最高成绩是：" << maxScore << endl;
}

int main (){
    system("chcp 65001>nul");      
    const int num = 5;
    Student student[num];
    for (int i = 0; i < num; i++)
    {
        student[i].input();
    }
    max(student,num);
    system("pause");
    return 0;
}