#include "常量.h"

using namespace std;

//常亮的命名方式有两种，一种是用#define预处理指令，另一种是使用const关键字。
int display_constant() {
	// 使用#define定义常量
	cout << "使用#define定义的常量 PI 的值: " << PI << endl;
	// 使用const关键字定义常量
	cout << "使用const关键字定义的常量 E 的值: " << E << endl;
	return 0;
}