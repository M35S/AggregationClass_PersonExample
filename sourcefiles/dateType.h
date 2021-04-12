#pragma once

class dateType
{
public:
	dateType();
	dateType(int dM = 1, int dD = 1, int dY = 1900);
	~dateType();

	void setDate(int month, int day, int year);
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	void printDate() const;

private:
	int dMonth;
	int dDay;
	int dYear;
};