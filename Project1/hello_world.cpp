#include <iostream>
#include "变量.h"
#include "常量.h"

int main() {
    std::cout << "Hello, world!\n";

    // 调用变量示例（如果存在）
    // 如果项目中没有 display()，可以移除此调用
    display();

    // 调用显示常量的函数
    display_constant();

    // 也可以直接使用头文件中的常量
    std::cout << "直接使用 PI: " << PI << std::endl;
    std::cout << "直接使用 E: " << E << std::endl;

    return 0;
}