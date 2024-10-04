/*

	Write a program to print Number of: Days - Hours - Minutes - Seconds in a certain Month.

	Please enter a year to check:
	1999

	Please enter a Month to check:
	12

	Number of Days in Month[12] is 31
	Number of Hours in Month [12] is 744
	Number of Minutes in Month [12] is 44640
	Number of Seconds in Month [12] is 2678400

	Please enter a year to check:
	2000
	Please enter a Month to check:
	2

	Number of Days in Month [2] is 29
	Number of Hours in Month [2] is 696
	Number of Minutes in Month [2] is 41760
	Number of Seconds in Month [2] is 2505600

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

	if (month == 2)
	{
		return IsLeapYear(Year) ? 29 : 28;
	}

	short arr31Days[7] = { 1,3,5,7,8,10,12 };

	for (short i = 1; i <= 7; i++)
	{
		if (arr31Days[i - 1] == month)
			return 31;
	}

	//if you reach here then its 30 days.
	return 30;

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

	printf("number of days in month [%d] is %d\n", Month, DaysInMonth(Month,Year));
	printf("number of hours in month [%d] is %d\n", Month, HoursInMonth(Month, Year));
	printf("number of minuts in month [%d] is %d\n", Month, MinutsInMonth(Month, Year));
	printf("number of sconds in month [%d] is %d\n", Month, SecondsInMonth(Month, Year));

	return 0;

}
