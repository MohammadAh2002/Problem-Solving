/*

	Write a program to print the total days from the beginning of the year.

*/

#include <iostream>

using namespace std;

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

int DaysFromYearStart(int Year,int Month, int Day) {

	int DaysSum = 0;

	for (int i = 1; i < Month; i++) {

		DaysSum += DaysInMonth(i, Year);

	}

	return DaysSum + Day;

}

int main()
{

	int Year = ReadNumber("enter the year:");
	int Month = ReadNumber("enter the Month:");
	int Day = ReadNumber("enter the Day:");

	printf("numbers of days from the start of the year is %d",DaysFromYearStart(Year, Month, Day));

	return 0;

}
