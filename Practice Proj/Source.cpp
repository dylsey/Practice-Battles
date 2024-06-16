#include <iostream>
#include <string>
#include <array>
#include <vector>

struct Bank
{
	int id{};
	float balance{}; 
	std::string firstName{};
	std::string lastName{};

};

Bank buildAccount(int id, float balance, std::string firstName, std::string lastName);

int main()
{

	buildAccount(id, balance, firstName, lastName);

}

Bank buildAccount(int id, float balance, std::string firstName, std::string lastName)
{

	std::vector <Bank> accounts;
	accounts.push_back(Bank());


	std::cout << "give an ID: " << std::endl;
	std::cin >> accounts.back().id;
	return Bank();
}