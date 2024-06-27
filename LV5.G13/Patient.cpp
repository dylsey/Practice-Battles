#include <iostream>
#include "Patient.h"

int Patient::lastID{ 0 };

Patient::Patient()
	: ID{ lastID }
{
	lastID++;

	std::cout << "What is the patient's first name: " << std::endl;
	std::cin >> firstName;

	std::cout << "What is the patient's last name: " << std::endl;
	std::cin >> lastName;

	std::cout << "What level would you rate teh patient's condition: \n"
		<< "\t1. mild\n"
		<< "\t2. moderate\n"
		<< "\t3. emergency\n";

	int userInput{};
	std::cin >> userInput;

	rating = ((Patient::Level)(userInput - 1));
}

Patient::Patient(std::string firstName, std::string lastName, Level rating)
	:firstName{ firstName }, lastName{ lastName }, rating{ rating }
{
}


void Patient::treatPatient()
{
	std::cin.ignore();
	std::cout << "What is the patient's condition: ";
	std::getline(std::cin, condition);

	std::cout << "What is the treatment recommendation: ";
	std::getline(std::cin, treatment);
}

void Patient::printPatient() const
{
	system("CLS");
	std::cout << firstName << " " << lastName << std::endl;
	std::cout << "ID: " << ID << std::endl;
	std::cout << "Condition: " << condition << std::endl;
	std::cout << "Treatment: " << treatment << std::endl;
	system("PAUSE");

}

bool Patient::matchIDs(int key) const
{
	return key == ID;
}