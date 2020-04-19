#include "Person_Student_Inheritance.h"

long Person::Population = 0;

Person::Person(int age, std::string name, int SSN) : SSN(SSN) {
	this->age = age;
	this->name = name;
	Person::Population++;
}

void Person::to_String() {
	std::cout << "Name: " << this->name << std::endl;
	std::cout << "Age: " << this->age << std::endl;
	std::cout << "SSN: " << this->SSN << std::endl;
	std::cout << std::endl;
}

Student::Student(int idNum, int age, std::string name, int SSN, std::string Major) : Person(age, name, SSN), major(Major) {
	this->idNum = idNum;
}

void Student::to_String() {
	std::cout << "Id Number: " << this->idNum << std::endl;
	std::cout << "Major of Study: " << this->major << std::endl;
	Person::to_String();
	std::cout << std::endl;
}

long Person::getPopulation() {
	return Person::Population;
}