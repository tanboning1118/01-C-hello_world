#include<iostream>

using namespace std;

// 数据类型 变量名  = 初始值;
int display() {
	int a = 10; // 整数变量
	double b = 5.5; // 浮点数变量
	char c = 'A'; // 字符变量
	bool d = true; // 布尔变量
	cout << "整数变量 a 的值: " << a << endl;
	cout << "浮点数变量 b 的值: " << b << endl;
	cout << "字符变量 c 的值: " << c << endl;
	cout << "布尔变量 d 的值: " << d << endl;

	//下面展示sizeof的使用  sizeof(变量名或数据类型)
	/* 常用数据类型：
	整型 short(2) int(4) long(4) long long(8)
	浮点型 float(4) double(8) long double(16)
	字符型 char(1)
	布尔型 bool(1)
	*/
	cout << "int 类型的大小: " << sizeof(a) << " 字节" << endl;
	cout << "double 类型的大小: " << sizeof(double) << " 字节" << endl;
	cout << "char 类型的大小: " << sizeof(char) << " 字节" << endl;
	cout << "bool 类型的大小: " << sizeof(bool) << " 字节" << endl;

	return 0;
}