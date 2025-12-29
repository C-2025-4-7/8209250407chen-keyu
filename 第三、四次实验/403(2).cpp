#include <iostream>
using namespace std;

// 函数声明
void inputArray(int* &arr, int &n);
void printArray(const int* arr, int n);
void sortArray(int* arr, int n);
void swap(int &a, int &b);

int main() {
    system("chcp 65001>nul");  // 设置控制台编码为UTF-8
    
    int* arr = nullptr;  // 初始化指针为空
    int n = 0;           // 数组元素个数
    
    // 1. 输入数组
    inputArray(arr, n);
    
    if (n <= 0) {
        cout << "数组元素个数必须大于0！" << endl;
        return 1;
    }
    
    // 2. 输出原始数组
    cout << "\n原始数组：" << endl;
    printArray(arr, n);
    
    // 3. 对数组排序
    sortArray(arr, n);
    
    // 4. 输出排序后的数组
    cout << "\n排序后的数组：" << endl;
    printArray(arr, n);
    
    // 5. 动态调试信息
    cout << "\n=== 动态调试信息 ===" << endl;
    cout << "数组指针 arr 的值（地址）: " << arr << endl;
    cout << "数组指针 arr 指向的地址: " << static_cast<void*>(arr) << endl;
    cout << "数组元素个数 n: " << n << endl;
    
    // 输出前几个元素的内存地址和值
    cout << "\n数组前3个元素的信息：" << endl;
    for (int i = 0; i < 3 && i < n; i++) {
        cout << "arr[" << i << "]:" << endl;
        cout << "  地址: " << &arr[i] << endl;
        cout << "  值: " << arr[i] << endl;
        cout << "  指针访问: *(arr + " << i << ") = " << *(arr + i) << endl;
    }
    
    // 6. 释放内存
    delete[] arr;
    arr = nullptr;  // 将指针设为空指针，避免悬空指针
    
    cout << "\n内存已释放，arr指针已置空。" << endl;
    cout << "当前 arr 指针的值: " << arr << " (空指针)" << endl;
    
    system("pause");
    return 0;
}

// 输入数组元素
void inputArray(int* &arr, int &n) {
    cout << "请输入数组元素个数: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "元素个数必须大于0！" << endl;
        return;
    }
    
    // 动态分配数组内存
    arr = new int[n];
    
    if (arr == nullptr) {
        cout << "内存分配失败！" << endl;
        n = 0;
        return;
    }
    
    cout << "请输入 " << n << " 个整数：" << endl;
    for (int i = 0; i < n; i++) {
        cout << "元素[" << i << "]: ";
        cin >> arr[i];
    }
}

// 输出数组元素（使用指针方式）
void printArray(const int* arr, int n) {
    if (arr == nullptr || n <= 0) {
        cout << "数组为空或无效！" << endl;
        return;
    }
    
    cout << "数组元素（使用指针遍历）：" << endl;
    
    // 方法1：使用数组下标（指针运算的语法糖）
    cout << "方法1 - 下标访问: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // 方法2：使用指针算术
    cout << "方法2 - 指针算术: ";
    for (const int* p = arr; p < arr + n; p++) {
        cout << *p << " ";
    }
    cout << endl;
    
    // 方法3：使用指针和索引
    cout << "方法3 - 指针偏移: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

// 交换两个数
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// 对数组进行冒泡排序（从小到大）
void sortArray(int* arr, int n) {
    if (arr == nullptr || n <= 1) {
        return;
    }
    
    cout << "\n开始排序..." << endl;
    
    // 冒泡排序
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++) {
            // 比较相邻元素
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
        // 如果没有发生交换，说明已经有序
        if (!swapped) {
            break;
        }
        
        // 显示每一轮排序结果
        cout << "第 " << i + 1 << " 轮排序后: ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    
    cout << "排序完成！" << endl;
}