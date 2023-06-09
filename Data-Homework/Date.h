#pragma once
#include <iostream>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
	int maxDaysPerMonth;
   
	static bool legitDate;
public:
	Date(int day, int month, int year);
	Date() : Date(0, 0, 0) {};
	~Date() {};
	void print() const;
	void dateImprover();
	Date& operator++();
	Date& operator++(int);
	Date& operator+=(const int N);
	Date& operator-=(const int N);

};


