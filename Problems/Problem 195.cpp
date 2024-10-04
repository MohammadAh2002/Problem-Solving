/*

	Write a program to read a Date and make a functions to Decrease date as follows:

	- DecreaseDateByOneDay 
	- DecreaseDateByXDays. 
	- DecreaseDateByOneWeek. 
	- DecreaseDateByXWeeks. 
	- DecreaseDateByOneMonth. 
	- DecreaseDateByXMonths. 
	- DecreaseDateByOneYear. 
	- DecreaseDateByXYears. 
	- DecreaseDateByXYearsFaster. 
	- DecreaseDateByOneDecade. 
	- DecreaseDateByXDecades. 
	- DecreaseDateByXDecadesFaster.
	- DecreaseDateByOneCentury. 
	- DecreaseDateByOneMillennium.

*/

#include <iostream>

using namespace std;

struct sDate {

	int Day, Month, Year;

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

sDate DecreaseDateByOneDay(sDate Date) {

	if (Date.Day == 1) {

		if (Date.Month == 1) {

			Date.Year--;
			Date.Month = 12;
			Date.Day = 31;

		}
		else {

			Date.Month--;
			Date.Day = NumberDaysInMonth(Date.Month,Date.Year);

		}

	}
	else {

		
		Date.Day--;

	}

	return Date;

}

sDate DecreaseDateByXDays(int DaysToDecrease, sDate DateInfo) {

	int DaysInYear = NumberOfDaysInAYear(DateInfo.Year);

	if (DaysToDecrease > DaysInYear) {

		DaysToDecrease += DaysFromYearStart(DateInfo);
		DateInfo.Year--;
		
	}

	while (DaysToDecrease > (DaysInYear = DaysFromYearStart(DateInfo))) {

		DaysToDecrease -= DaysInYear;
		DateInfo.Year--;

	}

	int DaysInMonth;

	while (DaysToDecrease > (DaysInMonth = NumberDaysInMonth(DateInfo.Month, DateInfo.Year))) {

		DaysToDecrease -= DaysInMonth;

		if (DateInfo.Month == 1) {

			DateInfo.Month = 12;
			DateInfo.Year--;
		}
		else
			DateInfo.Month--;

	}

	for (int i = 1; i <= DaysToDecrease;i++) {

		DateInfo = DecreaseDateByOneDay(DateInfo);

	}

	return DateInfo;

}

sDate DecreaseDateByOneWeek(sDate Date) {

	return DecreaseDateByXDays(7, Date);

}

sDate DecreaseDateByXWeeks(int WeeksToDecrease, sDate Date) {

	for (int i = 1; i <= WeeksToDecrease; i++) {

		Date = DecreaseDateByOneWeek(Date);

	}

	return Date;

}

sDate DecreaseDateByOneMonth(sDate Date) {

	short DaysInMonth;

	if (Date.Month == 1) {

		Date.Month = 12;
		Date.Year--;

	}
	else
	{
		Date.Month--;
	}

	if (Date.Day > (DaysInMonth = NumberDaysInMonth(Date.Month, Date.Year))) {

		Date.Day -= DaysInMonth;

		Date.Month--;

	}

	return Date;

}

sDate DecreaseDateByXMonths(int MonthToDecrease, sDate Date) {

	for (int i = 1; i <= MonthToDecrease; i++) {

		Date = DecreaseDateByOneMonth(Date);

	}

	return Date;

}

sDate DecreaseDateByOneYear(sDate Date) {

	Date.Year--;

	return Date;

}

sDate DecreaseDateByXYears(int YearsToDecrease, sDate Date) {

	for (int i = 1; i <= YearsToDecrease; i++) {

		Date = DecreaseDateByOneYear(Date);

	}

	return Date;
}

sDate DecreaseDateByXYearsFaster(int YearsToDecrease, sDate Date) {

	Date.Year -= YearsToDecrease;

	return Date;

}

sDate DecreaseDateByOneDecade(sDate Date) {

	Date.Year -= 10;

	return Date;

}

sDate DecreaseDateByXDecades(int DecadesToDecrease, sDate Date) {

	for (int i = 1; i <= DecadesToDecrease; i++) {

		Date = DecreaseDateByOneDecade(Date);

	}

	return Date;

}

sDate DecreaseDateByXDecadesFaster(int DecadesToAdd, sDate Date) {

	Date.Year -= DecadesToAdd * 10;

	return Date;

}

sDate DecreaseDateByOneCentury(sDate Date) {

	Date.Year -= 100;

	return Date;

}

sDate DecreaseDateByXCenturys(int CenturysToAdd, sDate Date) {

	Date.Year -= CenturysToAdd * 100;

	return Date;

}

sDate DecreaseDateByOneMillennuim(sDate Date) {

	Date.Year -= 1000;

	return Date;

}

sDate DecreaseDateByXMillennuims(int MillennuimsToAdd, sDate Date) {

	Date.Year -= MillennuimsToAdd * 1000;

	return Date;

}

int main()
{

	sDate Date;

	Date = ReadDate();

	cout << "Date After:\n";
	Date = DecreaseDateByOneDay(Date);
	printf("01-Subteacting one Day is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = DecreaseDateByXDays(10, Date);
	printf("02-Subteacting 10 Days is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = DecreaseDateByOneWeek(Date);
	printf("03-Subteacting one week is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = DecreaseDateByXWeeks(10, Date);
	printf("04-Subteacting 10 week is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = DecreaseDateByOneMonth(Date);
	printf("05-Subteacting one month is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = DecreaseDateByXMonths(5, Date);
	printf("06-Subteacting 5 months is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = DecreaseDateByOneYear(Date);
	printf("07-Subteacting one Year is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = DecreaseDateByXYears(10, Date);
	printf("08-Subteacting 10 years is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = DecreaseDateByXYearsFaster(10, Date);
	printf("09-Subteacting 10 years (faster) is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = DecreaseDateByOneDecade(Date);
	printf("10-Subteacting one Decade is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = DecreaseDateByXDecades(10, Date);
	printf("11-Subteacting 10 decades is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = DecreaseDateByXDecadesFaster(10, Date);
	printf("12-Subteacting 10 decades (faster) is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = DecreaseDateByOneCentury(Date);
	printf("13-Subteacting one Decade is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	Date = DecreaseDateByOneMillennuim(Date);
	printf("14-Subteacting one Decade is: %d/%d/%d\n", Date.Day, Date.Month, Date.Year);

	return 0;

}
