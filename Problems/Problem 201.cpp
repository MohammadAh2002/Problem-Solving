/*

	Write a program to read a Date and Check:  
	1- if Day is last day in month.     
	2- if Month is last month in year.

*/

#include <iostream>

using namespace std;

struct sDate {

	int Day, Month, Year;

};

int ReadNumber(string massege) {

	cout << massege;

	int num;

	cin >> num;

	return num;

}

bool IsLeapYear(int Year) {

	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

int DaysInMonth(int month, int Year) {

	if (month < 1 || month>12)
		return 0;

	int numberofdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (month == 2) ? (IsLeapYear(Year) ? 29 : 28) : numberofdays[month - 1];

}

bool IsLastDayInMonth(sDate Date) {

	return Date.Day == DaysInMonth(Date.Month,Date.Year);

}

bool IsLastMonthInYear(int Month) {

	return Month == 12;

}

int main()
{
   
	sDate Date;

	Date.Day = ReadNumber("enter a day: ");
	Date.Month = ReadNumber("enter a month: ");
	Date.Year = ReadNumber("enter a Year: ");

	if (IsLastDayInMonth(Date))
		cout << "yes, its the last day in month\n";
	else
		cout << "no, its not the last day in month\n";

	if (IsLastMonthInYear(Date.Month))
		cout << "yes, its the last month in year\n";
	else
		cout << "no, its not the last month in year\n";

	return 0;
}
