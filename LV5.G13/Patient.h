#pragma once
#include <string>

class Patient
{
public:
	enum class Level { mild, moderate, emergency };
	Patient();
	Patient(std::string firstName, std::string lastName, Level rating);
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