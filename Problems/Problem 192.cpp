/*

	Write a program to read Vacation Start (Date From and Vacation Days), then make a function
	to calculate the vacation return date.

	Note: Weekends are excluded.

*/

#include <iostream>

using namespace std;

struct sDate
{
	short Year;
	short Month;
	short Day;
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

bool IsLeapYear(int Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}
int CalculateDayOrderInTheWeek(int year, int month, int day) {

	//Start From Sunday With Number 0 end in satarday with number 6.

	int a;

	a = (14 - month) / 12;

	year = year - a;
	month = month + (12 * a) - 2;

	return (day + year + (year / 4) - (year / 100) + (year / 400) + ((31 * month) / 12)) % 7;

}
int DayOrderInTheWeek(sDate Date) {

	//Start From Sunday With Number 0 end in satarday with number 6.

	return CalculateDayOrderInTheWeek(Date.Year, Date.Month, Date.Day);

}
bool IsDate1BeforeDate2(sDate Date1, sDate Date2) {

	return (Date1.Year < Date2.Year || Date1.Month < Date2.Month || Date1.Day < Date2.Day);

}
short NumberOfDaysInMonth(int month, int Year) {

	if (month < 1 || month>12)
		return 0;

	int numberofdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (month == 2) ? (IsLeapYear(Year) ? 29 : 28) : numberofdays[month - 1];

}
bool IsWeekEnd(sDate Date) {

	short DyasIndex = DayOrderInTheWeek(Date);

	return DyasIndex == 5 || DyasIndex == 6;

}
bool IsLastDayInMonth(sDate Date) {

	return Date.Day == NumberOfDaysInMonth(Date.Month, Date.Year);

}
bool IsLastMonthInYear(int Month) {

	return Month == 12;

}
bool IsBusinessDay(sDate Date) {

	return !IsWeekEnd(Date);

}
sDate IncreaseDateByOneDay(sDate Date) {

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
short CalculateVacationDays(sDate VacationStart, sDate VacationEnd) {

	int VacationDays = 0;

	while (IsDate1BeforeDate2(VacationStart, VacationEnd)) {

		if (IsBusinessDay(VacationStart))
			VacationDays++;

		VacationStart = IncreaseDateByOneDay(VacationStart);


	}

	return VacationDays;

}
string DayName(int DayNum) {

	string Days[7] = { "sunday","monday","tusday", "wensday",
					  "thersday","friday","satarday" };

	return Days[DayNum];
}

sDate CalculateReturnDateFromVacation(sDate VacationStart, short VacationDays) {

	for (short i = 1; i <= VacationDays; i++) {

		if (IsWeekEnd(VacationStart))
			i--;

		VacationStart = IncreaseDateByOneDay(VacationStart);
				
	}

	while(IsWeekEnd(VacationStart))
		VacationStart = IncreaseDateByOneDay(VacationStart);

	return VacationStart;

}

int main()
{

	sDate VacationStart, ReturnDateFromVacation;
	short VacationDays;

	cout << "Vacation Start:\n";
	VacationStart = ReadDate();

	cout << "pleass enter Vacation Days: ";
	cin >> VacationDays;

	ReturnDateFromVacation = CalculateReturnDateFromVacation(VacationStart, VacationDays);

	cout << "\nreturn date: " << DayName(DayOrderInTheWeek(ReturnDateFromVacation)) << ", " << ReturnDateFromVacation.Day << "/" <<
		ReturnDateFromVacation.Month << "/" << ReturnDateFromVacation.Year << endl;

	return 0;
}
