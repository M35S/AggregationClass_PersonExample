#pragma once
#include "personType.h"
#include "dateType.h"

class personalInfo
{
public:
	personalInfo(std::string first = "", std::string last = "", 
		int month = 1, int day = 1, int year = 1900, int ID = 0);
	~personalInfo();

	void setPersonalInfo(std::string first, std::string last, 
		int month, int day, int year, int ID);
	void printPersonalInfo() const;

private:
	personType name;
	dateType bDay;
	int personID;
};