/*

	 Write a program to print Month Calendar.

*/

#include <iostream>

using namespace std;

bool IsLeapYear(int Year) {

	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}
int NumberDaysInMonth(int month, int Year) {

	if (month < 1 || month>12)
		return 0;

	int numberofdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (month == 2) ? (IsLeapYear(Year) ? 29 : 28) : numberofdays[month - 1];

}
string MonthName(int MonthNum) {

	string Months[12] = { "jan","feb","mar","apr","may", "jun",
						"jul","aug","sep","oct","nov","dec" };

	return Months[MonthNum - 1];
}
int DayOrder(int year, int month, int day) {

	int a;

	a = (14 - month) / 12;

	year = year - a;
	month = month + (12 * a) - 2;

	return (day + year + (year / 4) - (year / 100) + (year / 400) + ((31 * month) / 12)) % 7;

}

void PrintMonthCalender(int Year, int Month) {

	cout << "  _______________" << MonthName(Month) << "_______________\n\n";
	printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

	int FirstDay = DayOrder(Year, Month, 1);
	int MonthDaysNumber = NumberDaysInMonth(Month, Year);

	int daycounter = 1, counter = FirstDay;

	for (int i = 1; i <= FirstDay; i++)
		printf("     ");

	do {

		printf("%5d", daycounter);
		daycounter++;

		if (++counter == 7) {
			cout << '\n';
			counter = 0;
		}

	} while (daycounter <= MonthDaysNumber);

	printf("\n  _________________________________\n");
}

int main()
{

	PrintMonthCalender(2023, 10);

	return 0;

}
