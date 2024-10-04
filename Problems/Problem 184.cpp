/*

	Write a program to read Date and write a function to validate this date.

*/

#include <iostream>

using namespace std;

struct sDate {

	int Day, Month, Year;

};

sDate ReadDate() {

	sDate Date;

	cout << "enter a day: ";
	cin >> Date.Day;

	cout << "enter a month: ";
	cin >> Date.Month;

	cout << "enter a year: ";
	cin >> Date.Year;

	return Date;

}

bool IsLeapYear(int Year) {

	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

int NumberDaysInMonth(int month, int Year) {

	if (month < 1 || month>12)
		return 0;

	int numberofdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (month == 2) ? (IsLeapYear(Year) ? 29 : 28) : numberofdays[month - 1];

}

bool DateValidatetion(sDate Date) {

	if (Date.Month < 1 || Date.Month > 12)
		return false;

	short MonthDays = NumberDaysInMonth(Date.Month, Date.Year);

	if (Date.Day < 1 || Date.Day > MonthDays)
		return false;

	return true;

}

int main()
{
    
	sDate Date;

	Date = ReadDate();

	if (DateValidatetion(Date))
		cout << "yes, date is a valide date.";
	else
		cout << "no date is not a valide date";

    return 0;
}
