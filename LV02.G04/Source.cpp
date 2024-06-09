#include <string>
#include <tuple>
#include <iostream>

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
	enum class AccountTypes { none, savings, checking, moneyMarket };
	enum class Stocks { none, moneyMarket, nasdaq, equity };
	std::string firstName;
	std::string lastName;
	Address ownerAddress;

	AccountTypes accountType{};
	Stocks stockType{};

	float balance{ 0.0f };
};


int main()
{
	std::cout << "guess a number between 1 and 10: ";
	int guess{};
	std::cin >> guess;

	switch (guess)
	{
	case 1:
	case 2:
	case 3:
	case 4:
		std::cout << "too low! " << std::endl;
		break;
	case 5:
	case 7:
		std::cout << "Ohhhh!!! You were soooo close! " << std::endl;
		break;
	case 6:
		std::cout << "you win! " << std::endl;
		break;
	case 8:
	case 9:
	case 10:
		std::cout << "too high! " << std::endl;
		break;
	default:
		std::cout << "invalid guess! " << std::endl;
		break;
	}


	//if (guess == 6)
	//{
	//	std::cout << "you win" << std::endl;
	//}
	//else if ( guess == 5 || guess == 7)
	//{
	//	std::cout << "OHHHH!!! You were SOOOOO close!" << std::endl;
	//}
	//else if (guess < 5 && guess >= 1)
	//{
	//	std::cout << "too low!" << std::endl;
	//}
	//else if (guess > 7 && guess <= 10)
	//{
	//	std::cout << "too high! " std::endl;
	//}
	//else
	//{
	//	std::cout << "invalid guess!"  << std::endl;
	//}

	/*std::tuple<int, int> point(1, 2);
	auto& [x, y] = point;

	std::cout << "(x, y)" << x << ", " << y << std::endl;
	x++;
	y++;
	std::cout << "(x, y)" << x << ", " << y << std::endl;

	auto [a, b] = point;
	std::cout << "(a, b)" << a << ", " << b << std::endl;

	std::tuple<std::string, Address> person{ "George", {123, "Maple", "Ave", "Little Rock", "AR", 72204} };
	auto [name, address] = person;*/


	/*Account myAccount
	{
		"Mr.",
		"Orme",
		{123, "Maple", "St.", "Springfield", "AR", 72222},
		Account::AccountTypes::savings,
		Account::Stocks::none,
		23.56
	};

	Account yourAccount;

	myAccount.balance += 12.0f;

	Account::AccountTypes personal{ Account::AccountTypes::checking };
	int x{ (int)personal };
	Account::Stocks myStock{ Account::Stocks::nasdaq };
	myStock = (Account::Stocks)2;
	personal = Account::AccountTypes::moneyMarket;*/
}
