#include "Date.h"

bool Date::legitDate = true;


Date::Date(int day, int month, int year)
{

	this->day = day;
	this->month = month;
	this->year = year;
	dateImprover();
	if (!legitDate)
	{
		cout << "Date is not legit!" << endl;
		abort();
	}

}

void Date::print() const
{
	cout << day << "/" << month << "/" << year << endl;
}

void Date::dateImprover()
{
	//int maxDaysPerMonth;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		maxDaysPerMonth = 31;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		maxDaysPerMonth = 30;
	else if (month == 2)
		maxDaysPerMonth = 29;

	if (day > maxDaysPerMonth)
	{
		day = 1;
		legitDate = false;
		month++;
	}

	if (month > 12)
	{
		month = 1;
		legitDate = false;
		year++;
	}

	while (day < 0)
	{
		day += maxDaysPerMonth;
		month -= 1;
		if (month <= 0)
		{
			year--;
			month = 12;
		}
	}
}

Date& Date::operator++()
{
	++day;
	dateImprover();
	return *this;
}

Date& Date::operator++(int)
{
	Date temp(*this);
	++day;
	dateImprover();
	return temp;
}

Date& Date::operator+=(const int n)
{
	this->day += n;
	dateImprover();
	return *this;
}

Date& Date::operator-=(const int n)
{
	
		this->day -= n;
		dateImprover();
		return *this;
	
}
