#pragma once
#include <iostream>

//常亮的命名方式有两种，一种是用#define预处理指令，另一种是使用const关键字。
// 在头文件中优先使用 constexpr 或 inline const，以避免多重定义。
#define PI 3.14159
inline constexpr double E = 2.71828;

// 函数声明（保留原有注释）
int display_constant();