#include <iostream>	
#include <string>
#include <vector>

struct Patient
{
	enum class Level { mild, moderate, emergency };
	int ID{};
	std::string firstName;
	std::string lastName;
	Level rating{ Level::mild };

	std::string condition;
	std::string treatment;

};

Patient newPatient(int& lastId);
void treatPatient(Patient currentPatient);
void printPatient(const Patient& currentPatient);
Patient& findPatient(std::vector<Patient>& patients);


int main()
{
	std::vector<Patient> patients;
	int lastId{ 0 };

	int userInpt{ 0 };

	while (userInpt != 4)
	{
		std::cout << "Welcome to the Emergency Management System.\n"
			<< "What woudl you like to do: \n"
			<< "\t1. Add a new patient\n"
			<< "\t2. treat an exisiting patient\n"
			<< "\t3. display a patient's information\n"
			<< "\t4. Quit\n";
		std::cin >> userInpt;
		std::cout << std::endl;

		switch (userInpt)
		{
		case 1:
			patients.push_back(newPatient(lastId));
			break;
		case 2:
			treatPatient(findPatient(patients));
			break;
		case 3:
			printPatient(findPatient(patients));
			break;
		}
	}
}

Patient newPatient(int& lastID)
{
	Patient temp;

	lastID++;
	temp.ID = lastID;

	std::cout << "What is the patient's first name:	" << std::endl;
	std::cin >> temp.firstName;

	std::cout << "What is the patient's last name: " << std::endl;
	std::cin >> temp.lastName;

	std::cout << "What level would you rate teh patient's condition: \n"
		<< "\t1. mild\n"
		<< "\t2. moderate\n"
		<< "\t3. emergency\n";

	int userInput{};
	std::cin >> userInput;

	temp.rating = ((Patient::Level)(userInput - 1));

	return temp;
}

void treatPatient(Patient& currentPatient)
{
	std::cin.ignore();
	std::cout << "What is the patient's condition: ";
	std::getline(std::cin, currentPatient.condition);

	std::cout << "What is the treatment recommendation: ";
	std::getline(std::cin, currentPatient.treatment);
}

void printPatient(const Patient& currentPatient)
{
	system("CLS");
	std::cout << currentPatient.firstName << " " << currentPatient.lastName << std::endl;
	std::cout << "ID: " << currentPatient.ID << std::endl;
	std::cout << "Condition: " << currentPatient.condition << std::endl;
	std::cout << "Treatment: " << currentPatient.treatment << std::endl;
	system("PAUSE");

}

Patient& findPatient(std::vector<Patient>& patients)
{
	while (true)
	{
		std::cout << "What is the patient ID: ";
		int temp{};
		std::cin >> temp;

		for (auto& patient : patients)
		{
			if (temp == patient.ID)
			{
				return patient;
			}
		}

		std::cout << "Please input a valid patient ID!!" << std::endl;
	}
}
