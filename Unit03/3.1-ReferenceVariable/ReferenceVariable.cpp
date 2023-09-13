#include <iostream>

int main() {
	#pragma region ���ͱ���������
	int x{ 0 };		//C++11 ��ʼ����ʽ
	int& rx = x;
	rx = 8;
	std::cout << "x = " << x << std::endl;
	#pragma endregion

	#pragma region ָ�������
	const char* s = "Hello";
	const char* t = "World";
	const char*& r = s;			//C++ ����ָ�������
	std::cout << "r = " << r << std::endl;
	r = t;
	/*�����õĲ������ǶԱ������ߵĲ���
	Ҳ����˵ s ���ָ������Ѿ�����ֵΪ t ָ�������ֵ��*/
	std::cout << "After r = t, r = " << r << std::endl;
	std::cout << "After r = t, s = " << s << std::endl;
	#pragma endregion

	return 0;
}