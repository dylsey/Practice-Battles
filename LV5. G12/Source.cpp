#include <iostream>

int main()
{
	int x{ 3 };
	int* y{ nullptr };
	if (y == nullptr) std::cout << "nullptr\n";
	if (!y) std::cout << "still nullptr\n";
	y = &x;
	if (y) std::cout << "not nullprt\n";

	std::cout << x << std::endl;
	std::cout << y << std::endl;
	std::cout << *y << std::endl;
}
