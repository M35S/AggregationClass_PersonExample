#include "personalInfo.h"
#include <iostream>

personalInfo::personalInfo(std::string first, std::string last, 
	int month, int day, int year, int ID)
	: name(first, last), bDay(month, day, year)
{
	personID = ID;
}

personalInfo::~personalInfo()
{
}

void personalInfo::setPersonalInfo(std::string first, std::string last, 
	int month, int day, int year, int ID)
{
	name.setName(first, last);
	bDay.setDate(month, day, year);
	personID = ID;
}

void personalInfo::printPersonalInfo() const
{
	name.print();
	std::cout << "'s date of birth is ";
	bDay.printDate();
	std::cout << std::endl;
	std::cout << "and personal ID is " << personID;
	std::cout << std::endl;
}