#include <iostream>

using std::cout, std::cin, std::endl;

int main()
{
	cout << "lets's count to 3: "; 
	int i{ 1 };
	while (i <= 3)
	{
		cout << i << " ";
		i++;
	}
	cout << endl;

	int num{ 0 };

	for (; num < 1 || num > 10;)
	{
		cout << "please enter a number between 1 and 10: ";
		cin >> num; 
	}
}