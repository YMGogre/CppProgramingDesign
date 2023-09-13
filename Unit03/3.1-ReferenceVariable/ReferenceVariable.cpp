#include <iostream>

int main() {
	#pragma region 整型变量的引用
	int x{ 0 };		//C++11 初始化方式
	int& rx = x;
	rx = 8;
	std::cout << "x = " << x << std::endl;
	#pragma endregion

	#pragma region 指针的引用
	const char* s = "Hello";
	const char* t = "World";
	const char*& r = s;			//C++ 允许指针的引用
	std::cout << "r = " << r << std::endl;
	r = t;
	/*对引用的操作即是对被引用者的操作
	也就是说 s 这个指针变量已经被赋值为 t 指针变量的值了*/
	std::cout << "After r = t, r = " << r << std::endl;
	std::cout << "After r = t, s = " << s << std::endl;
	#pragma endregion

	return 0;
}