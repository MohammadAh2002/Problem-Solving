/*

	Write a program to read a Date and make functions as follows:

	- Overload the DayOfWeekOrder to take date structure
	- IsEndOfWeek
	- IsWeekEnd
	- IsBusinessDay
	- DaysUntilTheEndOfWeek
	- DaysUntilTheEndOfMonth
	- DaysUntilTheEndOfYear

*/
#pragma warning(disable : 4996)

#include <iostream>

using namespace std;

struct stDate {
	short Day, Month, Year;
};

static bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

stDate GetSystemDate() {

	stDate Date;

	time_t t = time(0);
	tm* now = localtime(&t);

	Date.Day = now->tm_mday;
	Date.Month = now->tm_mon + 1;
	Date.Year = now->tm_year + 1900;

	return Date;

}

short NumberOfDaysInMonth(short Month, short Year) {

	if (Month < 1 || Month>12)
		return 0;

	int numberofdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (IsLeapYear(Year) ? 29 : 28) : numberofdays[Month - 1];

}

int DayOrderInTheWeek(short Day, short Month, short Year) {

	//Start From Sunday With Number 0 end in satarday with number 6.

	int a;

	a = (14 - Month) / 12;

	Year = Year - a;
	Month = Month + (12 * a) - 2;

	return (Day + Year + (Year / 4) - (Year / 100) + (Year / 400) + ((31 * Month) / 12)) % 7;

}

bool IsEndOfTheWeek(stDate Date) {

	return DayOrderInTheWeek(Date.Day, Date.Month,Date.Year) == 6;

}

bool IsWeekEnd(stDate Date) {

	return DayOrderInTheWeek(Date.Day, Date.Month, Date.Year) == 5;

}

bool IsBusinessDay(stDate Date) {

	return !IsWeekEnd(Date);

}

short DaysUntilTheEndOfTheWeek(stDate Date) {

	return 6 - DayOrderInTheWeek(Date.Day, Date.Month, Date.Year);

}

short DaysUntilTheEndOfTheMonth(stDate Date, bool IncludeCurrentDay = false) {

	return (IncludeCurrentDay) ? NumberOfDaysInMonth(Date.Month, Date.Year) - Date.Day + 1  : NumberOfDaysInMonth(Date.Month, Date.Year) - Date.Day;

}

short NumberOfDaysInYear(short Year) {

	return IsLeapYear(Year) ? 366 : 365;

}

short DaysFromYearStart(stDate Date) {

	short DaysSum = 0;

	for (short i = 1; i < Date.Month; i++) {

		DaysSum += NumberOfDaysInMonth(i, Date.Year);

	}

	return DaysSum + Date.Day;

}

short DaysUntilTheEndOfTheYear(stDate Date, bool IncludeCurrentDay = false) {

	return (IncludeCurrentDay) ? NumberOfDaysInYear(Date.Year) - DaysFromYearStart(Date) + 1 : NumberOfDaysInYear(Date.Year) - DaysFromYearStart(Date);

}

string DayName(short DayNum) {

	string Days[7] = { "sunday","monday","tusday", "wensday",
					   "thersday","friday","satarday" };

	return Days[DayNum];
}

int main()
{

	stDate Date = GetSystemDate();

	cout << "\ntoday is " << DayName(DayOrderInTheWeek(Date.Day, Date.Month, Date.Year)) << ", " << Date.Day << "/"
		
		<< Date.Month << "/" << Date.Year << "\n\n";
	//---------
	if (IsEndOfTheWeek(Date))
		cout << "yes its end of the week\n";
	else
		cout << "no its not end of the week\n";
	//---------
	if (IsWeekEnd(Date))
		cout << "yes its weekend\n";
	else
		cout << "no today is " << DayName(DayOrderInTheWeek(Date.Day, Date.Month, Date.Year)) << ", not a weekend\n";
	//---------
	if (IsBusinessDay(Date))
		cout << "yes its a Business Day\n";
	else
		cout << "no its not a Business Day\n";
	//---------
	printf("\nDays Until end of the week: %d Day(s)\n", DaysUntilTheEndOfTheWeek(Date));
	printf("Days Until end of the month: %d Day(s)\n", DaysUntilTheEndOfTheMonth(Date));
	printf("Days Until end of the year: %d Day(s)\n", DaysUntilTheEndOfTheYear(Date));

	return 0;

}
