/*

	Write a program to read date and read how many days to add to it.
	print the New Date on screen.

*/

#include <iostream>

using namespace std;

struct Date {

	int Day, Year, Month;

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

short NumberOfDaysInAYear (short Year) {
	
	return IsLeapYear(Year) ? 366 : 365; 

}

int NumberDaysInMonth(int month, int Year) {

	if (month < 1 || month>12)
		return 0;

	int numberofdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (month == 2) ? (IsLeapYear(Year) ? 29 : 28) : numberofdays[month - 1];

}

int DaysFromYearStart(int Year, int Month, int Day) {

	int DaysSum = 0;

	for (int i = 1; i < Month; i++) {

		DaysSum += NumberDaysInMonth(i, Year);

	}

	return DaysSum + Day;

}

Date AddDaysToDate(int DaysToAdd, Date DateInfo) {

	int DaysInYear = NumberOfDaysInAYear(DateInfo.Year);
	int DaysInMonth;

	DaysToAdd +=  DaysFromYearStart(DateInfo.Year, DateInfo.Month, DateInfo.Day);
	DateInfo.Month = 1;

	while (true) {

		int DaysInYear = NumberOfDaysInAYear(DateInfo.Year);

		if (DaysToAdd > DaysInYear)
		{
			DaysToAdd -= DaysInYear;
			DateInfo.Year++;
			continue;
		}

		DaysInMonth = NumberDaysInMonth(DateInfo.Month, DateInfo.Year);

		if (DaysToAdd > DaysInMonth)
		{
			DaysToAdd -= DaysInMonth;
			DateInfo.Month++;
			continue;
		}
		else
		{
			DateInfo.Day = DaysToAdd;
			break;
		}
	}

	return DateInfo;
}

int main()
{

	Date DateInfo;

	 DateInfo.Day = ReadNumber("enter the day: ");
	 DateInfo.Month = ReadNumber("enter the month: ");
	 DateInfo.Year = ReadNumber("enter the year: ");

	 int DaysToAdd = ReadNumber("enter how many Days to add: ");


	 DateInfo = AddDaysToDate(DaysToAdd,DateInfo);

	 printf("date after adding [%d] Days is: %d/%d/%d.", DaysToAdd, DateInfo.Day, DateInfo.Month, DateInfo.Year);

	system("pause>0");

	return 0;
}
