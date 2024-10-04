/*

	Write a program to read a Date and make a functions to increase date as follows:

	- IncreaseDateByOneDay.
	- IncreaseDateByXDays.
	- IncreaseDateByOneWeek.
	- IncreaseDateByXWeeks. 
	- IncreaseDateByOneMonth.
	- IncreaseDateByXMonths.
	- IncreaseDateByOneYear.
	- IncreaseDateByXYears.
	- IncreaseDateByXYearsFaster. 
	- IncreaseDateByOneDecade. 
	- IncreaseDateByXDecades. 
	- IncreaseDateByXDecadesFaster. 
	- IncreaseDateByOneCentury. 
	- IncreaseDateByOneMillenniu

*/

#include <iostream>

using namespace std;

struct sDate{

	int Day, Month, Year;

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

bool IsLastDayInMonth(sDate Date) {

	return Date.Day == NumberDaysInMonth(Date.Month, Date.Year);

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

sDate IncreaseDateByXDays(int DaysToAdd, sDate DateInfo) {

	int DaysInYear = NumberOfDaysInAYear(DateInfo.Year);

	if (DaysToAdd > DaysInYear) {

		DaysToAdd += (NumberOfDaysInAYear(DateInfo.Year) - DaysFromYearStart(DateInfo));
		DateInfo.Year++;
	}

	while (DaysToAdd > DaysInYear) {

		DaysInYear = NumberOfDaysInAYear(DateInfo.Year);

		DaysToAdd -= DaysInYear;
		DateInfo.Year++;
		
	}

	int DaysInMonth = NumberDaysInMonth(DateInfo.Month, DateInfo.Year);

	while (DaysToAdd > DaysInMonth) {

		DaysToAdd -= DaysInMonth;

		if (DateInfo.Month == 12)
			DateInfo.Month = 1;
		else 
			DateInfo.Month++;

		DaysInMonth = NumberDaysInMonth(DateInfo.Month, DateInfo.Year);

	}

	DateInfo.Day += DaysToAdd;

	while (DateInfo.Day > NumberDaysInMonth(DateInfo.Month, DateInfo.Year)) {

		DateInfo.Day -= DaysInMonth;
		DateInfo.Month++;

	}

	return DateInfo;

}

sDate IncreaseDateByOneWeek(sDate Date) {

	return IncreaseDateByXDays(7, Date);

}

sDate IncreaseDateByXWeeks(int WeeksToAdd, sDate Date) {

	for (int i = 1; i <= WeeksToAdd; i++) {

		Date = IncreaseDateByOneWeek(Date);

	}

	return Date;

}

sDate IncreaseDateByOneMonth(sDate Date) {

	int DaysInMonth;

	if(Date.Month == 12){
		
		Date.Month = 1;
		Date.Year++;

	}
	else
	{
		Date.Month++;
	}

	DaysInMonth = NumberDaysInMonth(Date.Month, Date.Year);

	if (Date.Day > DaysInMonth) {

		Date.Day -= DaysInMonth;

		Date.Month++;

	}

	return Date;

}

sDate IncreaseDateByXMonths(int MonthToAdd, sDate Date) {

	for (int i = 1; i <= MonthToAdd; i++) {

		Date = IncreaseDateByOneMonth(Date);

	}

	return Date;

}

sDate IncreaseDateByOneYear(sDate Date) {

	Date.Year++;

	return Date;

}

sDate IncreaseDateByXYears(int YearsToAdd,sDate Date) {

	for (int i = 1; i <= YearsToAdd; i++) {

		Date = IncreaseDateByOneYear(Date);

	}

	return Date;
}

sDate IncreaseDateByXYearsFaster(int YearsToAdd, sDate Date) {

	Date.Year += YearsToAdd;

	return Date;

}

sDate IncreaseDateByOneDecade(sDate Date) {

	Date.Year += 10;

	return Date;

}

sDate IncreaseDateByXDecades(int DecadesToAdd, sDate Date) {

	for (int i = 1; i <= DecadesToAdd; i++) {

		Date = IncreaseDateByOneDecade(Date);

	}

	return Date;

}

sDate IncreaseDateByXDecadesFaster(int DecadesToAdd, sDate Date) {

	Date.Year += DecadesToAdd * 10;

	return Date;

}

sDate IncreaseDateByOneCentury(sDate Date) {

	Date.Year += 100;

	return Date;

}

sDate IncreaseDateByXCenturys(int CenturysToAdd, sDate Date) {

	Date.Year += CenturysToAdd * 100;

	return Date;

}

sDate IncreaseDateByOneMillennuim(sDate Date) {

	Date.Year += 1000;

	return Date;

}

sDate IncreaseDateByXMillennuims(int MillennuimsToAdd, sDate Date) {

	Date.Year += MillennuimsToAdd * 1000;

	return Date;

}

int main()
{
   
	sDate Date;

	Date.Day = ReadNumber("enter a day: ");
	Date.Month = ReadNumber("enter a month: ");
	Date.Year = ReadNumber("enter a year: ");

	cout << "Date After:\n";
	Date = IncreaseDateByOneDay(Date);
	printf("01-Adding one Day is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = IncreaseDateByXDays(10, Date);
	printf("02-Adding 10 Days is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = IncreaseDateByOneWeek(Date);
	printf("03-Adding one week is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = IncreaseDateByXWeeks(10,Date);
	printf("04-Adding 10 week is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = IncreaseDateByOneMonth(Date);
	printf("05-Adding one month is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = IncreaseDateByXMonths(5, Date);
	printf("06-Adding 5 months is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = IncreaseDateByOneYear(Date);
	printf("07-Adding one Year is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = IncreaseDateByXYears(10, Date);
	printf("08-Adding 10 years is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = IncreaseDateByXYearsFaster(10, Date);
	printf("09-Adding 10 years (faster) is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = IncreaseDateByOneDecade(Date);
	printf("10-Adding one Decade is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = IncreaseDateByXDecades(10, Date);
	printf("11-Adding 10 decades is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = IncreaseDateByXDecadesFaster(10, Date);
	printf("12-Adding 10 decades (faster) is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = IncreaseDateByOneCentury(Date);
	printf("13-Adding one Decade is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = IncreaseDateByOneMillennuim(Date);
	printf("14-Adding one Decade is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	return 0;

}
