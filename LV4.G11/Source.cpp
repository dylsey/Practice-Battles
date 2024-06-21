#include <iostream>	
#include <string>
#include <vector>

class Patient
{
public:
	enum class Level { mild, moderate, emergency };
	Patient();
	void newPatient(int& lastId);
	void treatPatient();
	void printPatient() const;

	bool matchIDs(int key) const;
	static int lastID;
private:
	int ID{};
	std::string firstName;
	std::string lastName;
	Level rating{ Level::mild };

	std::string condition;
	std::string treatment;

};

int Patient::lastID{ 1 };
Patient& findPatient(std::vector<Patient>& patients);

int main()
{
	std::vector<Patient> patients;
	const Patient patient;

	int lastId{ 0 };
	int userInpt{ 0 };

	while (userInpt != 4)
	{
		std::cout << "Welcome to the Emergency Management System.\n"
			<< "What would you like to do: \n"
			<< "\t1. Add a new patient\n"
			<< "\t2. treat an existing patient\n"
			<< "\t3. display a patient's information\n"
			<< "\t4. Quit\n";
		std::cin >> userInpt;


		switch (userInpt)
		{
		case 1:
			patients.push_back(Patient());
			patients.back().newPatient(lastId);
			break;
		case 2:
			findPatient(patients).treatPatient();
			break;
		case 3:
			findPatient(patients).printPatient();
			break;
		}
	}
}

Patient::Patient()
	: ID{lastID}

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

Patient& findPatient(std::vector<Patient>& patients)
{
	while (true)
	{
		std::cout << "What is the patient ID: ";
		int temp{};
		std::cin >> temp;

		for (auto& patient : patients)
		{
			if (patient.matchIDs(temp))
			{
				return patient;
			}
		}

		std::cout << "Please input a valid patient ID!!" << std::endl;
	}
}
