/*

	Write a program to read a date and make a function to increase date one day.

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

	return Date.Day == DaysInMonth(Date.Month, Date.Year);

}

bool IsLastMonthInYear(int Month) {

	return Month == 12;

}

sDate IncreseDateWithOneDay(sDate Date) {

	if (IsLastDayInMonth(Date)) {
		
		Date.Day = 1;

		if (IsLastMonthInYear(Date.Month)) {

			Date.Month = 1;
			Date.Year++;

		}
		else
			Date.Month++;

	}
	else {
		Date.Day++;
	}

	return Date;

}

int main()
{

	sDate Date;

	Date.Day = ReadNumber("enter a day: ");
	Date.Month = ReadNumber("enter a month: ");
	Date.Year = ReadNumber("enter a Year: ");

	Date = IncreseDateWithOneDay(Date);

	printf("Date after adding one day is: %d/%d/%d", Date.Day, Date.Month, Date.Year);

	return 0;
}
