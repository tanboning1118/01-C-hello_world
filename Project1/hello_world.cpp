#include <iostream>
#include "变量.h"
#include "常量.h"
using namespace std;
int main() {
    std::cout << "Hello, world!\n";

    bool flag = false;
	cout << "请输入Boolean flag value: " <<  std::endl; // 输出布尔变量的值
	cin >> flag;
    
    if (flag) {
        std::cout << "Flag is true!" << std::endl;
    } else {
        std::cout << "Flag is false!" << std::endl;
	}

    // 调用变量示例（如果存在）
    // 如果项目中没有 display()，可以移除此调用
    display();

    // 调用显示常量的函数
    display_constant();

    // 也可以直接使用头文件中的常量
    std::cout << "直接使用 PI: " << PI << std::endl;
    std::cout << "直接使用 E: " << E << std::endl;

	system("pause");
    return 0;
}