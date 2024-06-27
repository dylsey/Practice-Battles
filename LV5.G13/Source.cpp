#include <iostream>	
#include <string>
#include <vector>
#include "Patient.h"




Patient& findPatient(std::vector<Patient*>& patients);


int main()
{
	std::vector<Patient*> patients;
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
			patients.push_back(new Patient("Mr.", "Orme", Patient::Level::mild));
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



Patient& findPatient(std::vector<Patient*>& patients)
{
	while (true)
	{
		std::cout << "What is the patient ID: ";
		int temp{};
		std::cin >> temp;

		for (auto patient : patients)
		{
			//if (patient->matchIDs(temp))
		//	{
			delete patient;
			//	}
		}
		patients.clear();

		std::cout << "Please input a valid patient ID!!" << std::endl;
	}
}
