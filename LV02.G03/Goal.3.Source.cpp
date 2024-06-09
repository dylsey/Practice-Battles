#include <iostream>
#include <string>
int main()
{
	std::string firstName{ "Dylan" };
	std::string lastName{ "Yele" };
	std::cout << "Please enter your name: ";
	std::cin >> firstName >> lastName;

	std::cout << "hello, my name is: " << firstName << " " << lastName << std::endl;

	std::cout << "my menu: \n\a"
				<< "\t1. first choice\n"
				<< "\t2. second choice\n"
				<< "\t3. third choice\n";
	int userChoice{};
	std::cin >> userChoice;
	std::cout << "you chose: " << userChoice << std::endl;

	bool isNew{ false };
	isNew++;
	std::cout << "bool ++: " << isNew << std::endl;
	isNew--;
	std::cout << "bool ++: " << isNew << std::endl;

	/*std::cout << "bool: " << sizeof(bool) << std::endl;
	std::cout << "char: " << sizeof(char) << std::endl;
	std::cout << "int: " << sizeof(int) << std::endl;
	std::cout << "float: " << sizeof(float) << std::endl;
	std::cout << "double: " << sizeof(double) << std::endl;
	{
		double x{ 2.1 };
		{
			int y{ 3 };
			{
				auto z{ x / y };
				std::cout << "x: " << x << ", y: " << y << ", z: " << z << std::endl;

				x = 4.6;
			}
			y = (int)x;
		}
		z = x + 3.7;
		std::cout << "x: " << x << ", y: " << y << ", z: " << z << std::endl;
	}*/
}