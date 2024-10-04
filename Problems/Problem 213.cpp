/*

	Write a program to print Number of Days in a certain Month. 
	Note: Two lines of code (Logic)

*/

#include <iostream>

using namespace std;

bool IsLeapYear(int Year) {

	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

int ReadNumber(string massege) {

	cout << massege;

	int num;

	cin >> num;

	return num;

}

int DaysInMonth(int month, int Year) {

	if (month < 1 || month>12)
		return 0;

	int numberofdays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	return (month == 2) ? (IsLeapYear(Year) ? 29 : 28) : numberofdays[month - 1];
}

int HoursInMonth(int month, int Year) {

	return DaysInMonth(month, Year) * 24;

}

int MinutsInMonth(int month, int Year) {

	return HoursInMonth(month, Year) * 60;

}

int SecondsInMonth(int month, int Year) {

	return MinutsInMonth(month, Year) * 60;

}

int main()
{

	int Month = ReadNumber("enter a month:");
	int Year = ReadNumber("enter the year:");

	printf("number of days in month [%d] is %d\n", Month, DaysInMonth(Month, Year));
	printf("number of hours in month [%d] is %d\n", Month, HoursInMonth(Month, Year));
	printf("number of minuts in month [%d] is %d\n", Month, MinutsInMonth(Month, Year));
	printf("number of sconds in month [%d] is %d\n", Month, SecondsInMonth(Month, Year));

	return 0;

}
