#include <iostream>
#include <array>
#include <vector>
#include <string>
struct Address
{
	int houseNumber{};
	std::string streetName;
	std::string streetType{ "St." };
	std::string city;
	std::string state;
	int zipCode{};
};

struct Account
{
	enum class AccountTypes{none, savings, checking, moneyMarket};
	enum class Stocks {none, moneyMarket, nasdaq, equity};

	std::string firstName;
	std::string lastName;
	Address ownerAddress;

	AccountTypes accountType{};
	Stocks stockType{};

	float balance{ 0.0f };

};

int main()
{
	std::vector<int> numbers{ 1, 2 };

	numbers.push_back(-2);
	numbers.push_back(6);
	numbers.push_back(8);

	std::cout << numbers.at(4);	


	std::vector<Account> accounts;
	accounts.push_back(Account());

	accounts.at(0).lastName = "Orme";
	accounts.at(accounts.size() - 1).balance = 32.43;
	accounts.back().firstName = "Mr.";

	std::cout << accounts.back().firstName << accounts.back().lastName;

	accounts.reserve(50);
	std::cout << accounts.capacity() << " " << accounts.size() << std::endl;

	accounts.assign(20, Account());
	std::cout << accounts.capacity() << " " << accounts.size() << std::endl;

	if (accounts.empty())
	{
		std::cout << "No Accounts";
	}
	
	accounts.shrink_to_fit();
	std::cout << accounts.capacity() << " " << accounts.size() << std::endl;

	accounts.clear();

	if (accounts.empty())
	{
		std::cout << "No Accounts";
	}
	std::cout << accounts.capacity() << " " << accounts.size() << std::endl;


	


	/*std::array<Account, 2> accounts;

	accounts.at(0).balance = 2.00f;

	std::array<int, 5> numbers{ 1, 2 };

	numbers.at(3) = -6;
	numbers.at(4) = 12;

	std::cout  << numbers.at(0)
		<< numbers.at(1)
		<< numbers.at(2)
		<< numbers.at(3)
		<< numbers.at(4)
		<< std::endl;*/
}