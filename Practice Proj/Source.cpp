#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main() {

	int a{ 3 };
	int b{ a };

	int& c{ a };
	a = 5; 

	std::array<int,8> myArray{};

	for (int i{ 0 }; i < myArray.size(); i++)
	{
		myArray[i] = i; 
		std::cout << " array spot: " << i << " : " <<	myArray[i];
	}

}