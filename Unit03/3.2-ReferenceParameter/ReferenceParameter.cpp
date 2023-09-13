#include <iostream>

void swapByValue(int left, int right) {
	int temp = 0;
	temp = left;
	left = right;
	right = temp;
}

void swapByPointer(int* left, int* right) {
	int temp = 0;
	temp = *left;
	*left = *right;
	*right = temp;
}

void swapByReference(int& left, int& right) {
	int temp = 0;
	temp = left;
	left = right;
	right = temp;
}

int main() {
	int a = 1, b = 2;
	std::cout << "Before swapByValue,	a = " << a << ", and b = " << b << std::endl;
	swapByValue(a, b);
	std::cout << "After swapByValue,	a = " << a << ", and b = " << b << std::endl << std::endl;

	int c = 3, d = 4;
	std::cout << "Before swapByPointer,	c = " << c << ", and d = " << d << std::endl;
	swapByPointer(&c, &d);
	std::cout << "After swapByPointer,	c = " << c << ", and d = " << d << std::endl << std::endl;

	int e = 5, f = 6;
	std::cout << "Before swapByReference,	e = " << e << ", and f = " << f << std::endl;
	swapByReference(e, f);
	std::cout << "After swapByReference,	e = " << e << ", and f = " << f << std::endl;

	return 0;
}