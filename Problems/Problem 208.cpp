/*

	Write a program to print Year Calendar.

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

int DaysInMonth(int month, int Year) {

	if (month < 1 || month>12)
		return 0;

	int numberofdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (month == 2) ? (IsLeapYear(Year) ? 29 : 28) : numberofdays[month - 1];

}

string DayName(int DayNum) {

	string Days[7] = { "sunday","monday","tusday", "wensday",
					  "thersday","friday","satarday" };

	return Days[DayNum];
}

void tabtab(int tabnum) {

	for (int i = 1; i <= tabnum; i++)
		cout << "\t";

}

void PrintMonthCalender(int Year, int Month) {

	cout << "_________________________" << MonthName(Month) << "_________________________\n\n";
	printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");

	int FirstDay = DayOrder(Year, Month, 1);
	int MonthDaysNumber = DaysInMonth(Month, Year);

	tabtab(FirstDay);

	int daycounter = 1, counter = FirstDay;

	do {

		cout << daycounter << '\t';
		daycounter++;

		if (++counter == 7) {
			cout << '\n';
			counter = 0;
		}

	} while (daycounter <= MonthDaysNumber);

	cout << "\n_____________________________________________________\n\n";

}

void PrintYearCalnder(int Year) {

	cout << "\t\n_____________________________________________________\n\n";
	cout << "\t\tcalnder - " << Year << endl;
	cout << "\t\n_____________________________________________________\n\n";

	for (int i = 1; i <= 12; i++) {

		PrintMonthCalender(Year, i);
	}
}

int main()
{

	int Year = ReadNumber("enter a year: ");

	PrintYearCalnder(Year);

	return 0;
}
