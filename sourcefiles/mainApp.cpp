#include <iostream>
#include "personalInfo.h"

int main()
{
	personalInfo student{ "Silly", "Billy", 9, 26, 1980, 69 };

	personalInfo employee;

	employee.setPersonalInfo("Dilly", "Dally", 2, 19, 1987, 33);

	student.printPersonalInfo();
	employee.printPersonalInfo();

	system("pause");

	return 0;
}