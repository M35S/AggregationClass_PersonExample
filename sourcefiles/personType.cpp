#include "personType.h"
#include <iostream>

personType::personType()
{
}

personType::personType(std::string first, std::string last)
{
	firstName = first;
	lastName = last;
}

personType::~personType()
{
}

void personType::print() const
{
	std::cout << firstName << " " << lastName;
}

void personType::setName(std::string first, std::string last)
{
	firstName = first;
	lastName = last;
}

std::string personType::getFirstName() const
{
	return firstName;
}

std::string personType::getLastName() const
{
	return lastName;
}