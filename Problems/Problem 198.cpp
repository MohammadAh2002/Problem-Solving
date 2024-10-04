/*

	Write a program calculate your age in days.

*/

#pragma warning (disable:4996)

#include <iostream>

using namespace std;

struct sDate {

	int Day,Month,Year;

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

short NumberOfDaysInAYear(short Year) { 
	
	return IsLeapYear(Year) ? 366 : 365;

}

int DaysInMonth(int month, int Year) {

	if (month < 1 || month>12)
		return 0;

	int numberofdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (month == 2) ? (IsLeapYear(Year) ? 29 : 28) : numberofdays[month - 1];

}

bool IsDate1BeforeDate2(sDate Date1, sDate Date2) {

	//return (Date1.Year < Date2.Year) ? true : (Date1.Month < Date2.Month) ? true : (Date1.Day < Date2.Day) ? true : false;

	return (Date1.Year < Date2.Year || Date1.Month < Date2.Month || Date1.Day < Date2.Day);
}

int DaysFromYearStart(sDate Date) {

	int DaysSum = 0;

	for (int i = 1; i < Date.Month; i++) {

		DaysSum += DaysInMonth(i, Date.Year);

	}

	return DaysSum + Date.Day;

}

int DeffrenceInDaysBtweenYears(sDate Date1, sDate Date2, bool IncludEndDay = false) {

	int DaysDiff;

	if (IsDate1BeforeDate2(Date1, Date2)) {

		if (Date1.Year == Date2.Year) {

			if (IncludEndDay)
				return DaysFromYearStart(Date2) - DaysFromYearStart(Date1) + 1;
			else
				return DaysFromYearStart(Date2) - DaysFromYearStart(Date1);

		}
		else {

			DaysDiff = NumberOfDaysInAYear(Date1.Year) - DaysFromYearStart(Date1);
			Date1.Year++;

			while (Date1.Year < Date2.Year) {

				DaysDiff += NumberOfDaysInAYear(Date1.Year);
				Date1.Year++;
			}

			DaysDiff += DaysFromYearStart(Date2);

			if (IncludEndDay)
				return DaysDiff + 1;
			else
				return DaysDiff;
		}
	}
	else {
		return 0;
	}

}

sDate GetSystemDate() {

	sDate Date;

	time_t t = time(0);
	tm* now = localtime(&t);

	Date.Day = now->tm_mday;
	Date.Month = now->tm_mon + 1;
	Date.Year = now->tm_year + 1900;

	return Date;

}

int CalculateAgeInDays(sDate Date1, sDate Date2) {

	return DeffrenceInDaysBtweenYears(Date1, Date2);

}

int main()
{

	sDate Date1, Date2;

	cout << "please enter your date of birth:\n";

	Date1.Day = ReadNumber("please enter a day: ");
	Date1.Month = ReadNumber("please enter a month: ");
	Date1.Year = ReadNumber("please enter a Year: ");

	Date2 = GetSystemDate();

	cout << "your age is: " << CalculateAgeInDays(Date1,Date2) << "day(s)";

	return 0;
	
}
