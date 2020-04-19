#pragma once
#ifndef PERSON_STUDENT_H
#define PERSON_STUDENT_H

#include <iostream>
#include <string>

class Person {
public:
	Person(int, std::string, int SSN);
	void to_String();
	long getPopulation();
protected:
	std::string name;
	int age;
	const int SSN;
	static long Population;
};

class Student : public Person {
public:
	Student(int, int, std::string, int, std::string);
	void to_String();
protected:
	int idNum;
	const std::string major;
};

#endif // !PERSON_STUDENT_H

