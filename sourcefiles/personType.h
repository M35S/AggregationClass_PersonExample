#pragma once
#include <string>

class personType
{
public:
	personType();
	personType(std::string first = "", std::string last = "");
	~personType();

	void print() const;
	void setName(std::string fN, std::string lN);
	std::string getFirstName() const;
	std::string getLastName() const;

private:
	std::string firstName;
	std::string lastName;
};