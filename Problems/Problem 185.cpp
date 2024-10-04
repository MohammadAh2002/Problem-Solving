/*

	Write a program to read a Two Periods, then count Overlap days.

*/

#include <iostream>

using namespace std;

struct sDate {

	int Day, Month, Year;

};

struct sPeriod {

	sDate StartDate, EndDate;

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

sPeriod ReadPeriod() {

	sPeriod Period;

	cout << "enter start date:\n";
	Period.StartDate = ReadDate();

	cout << "\nenter end date:\n";
	Period.EndDate = ReadDate();

	return Period;

}

bool IsLeapYear(int Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(sDate Date1, sDate Date2) {

	//return (Date1.Year < Date2.Year) ? true : (Date1.Month < Date2.Month) ? true : (Date1.Day < Date2.Day) ? true : false;

	return (Date1.Year < Date2.Year || Date1.Month < Date2.Month || Date1.Day < Date2.Day);
}

bool IsDate1AfterDate2(sDate Date1, sDate Date2) {

	return (Date1.Year > Date2.Year) || (Date1.Month > Date2.Month) || (Date1.Day > Date2.Day);

}

bool IsOverlapPeriods(sPeriod Period1, sPeriod Period2) {

	return !(IsDate1BeforeDate2(Period1.EndDate, Period2.StartDate) || IsDate1AfterDate2(Period1.StartDate, Period2.EndDate));

}

short NumberOfDaysInMonth(int month, int Year) {

	if (month < 1 || month>12)
		return 0;

	int numberofdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (month == 2) ? (IsLeapYear(Year) ? 29 : 28) : numberofdays[month - 1];

}

bool IsLastDayInMonth(sDate Date) {

	return Date.Day == NumberOfDaysInMonth(Date.Month, Date.Year);

}
bool IsLastMonthInYear(int Month) {

	return Month == 12;

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

short NumberOfDaysInAYear(short Year) { 
	
	return IsLeapYear(Year) ? 366 : 365;

}

int NumberDaysInMonth(int month, int Year) {

	if (month < 1 || month>12)
		return 0;

	int numberofdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (month == 2) ? (IsLeapYear(Year) ? 29 : 28) : numberofdays[month - 1];

}

int DaysFromYearStart(sDate Date) {

	int DaysSum = 0;

	for (int i = 1; i < Date.Month; i++) {

		DaysSum += NumberDaysInMonth(i, Date.Year);

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

int OverlapDaysBetween2Periods(sPeriod Period1, sPeriod Period2) {

	int OverlapDays = 0;

	if (IsOverlapPeriods(Period1, Period2)) {

		return DeffrenceInDaysBtweenYears(Period2.StartDate, Period1.EndDate);

	}
	
	return 0;
}

int main()
{
    
	sPeriod Period1, Period2;

	cout << "enter period 1:\n";
	Period1 = ReadPeriod();

	cout << "enter period 2:\n";
	Period2 = ReadPeriod();

	cout << "overlap days count: " << OverlapDaysBetween2Periods(Period1,Period2) << endl;

    return 0;

}
