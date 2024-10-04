/*

	Write a program to read a Date1, Date2 and make a function to calculate the difference in days.
	Note: if Date2 is less than Date1 print the result in negative.

*/

#include <iostream>

using namespace std;

struct sDate {

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

int DaysInMonth(int month, int Year) {

	if (month < 1 || month>12)
		return 0;

	int numberofdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (month == 2) ? (IsLeapYear(Year) ? 29 : 28) : numberofdays[month - 1];

}

int DaysFromYearStart(sDate Date) {

	int DaysSum = 0;

	for (int i = 1; i < Date.Month; i++) {

		DaysSum += DaysInMonth(i, Date.Year);

	}

	return DaysSum + Date.Day;

}

short NumberOfDaysInAYear(short Year) {
	
	return IsLeapYear(Year) ? 366 : 365;

}

bool IsDate1BeforeDate2(sDate Date1, sDate Date2) {

	//return (Date1.Year < Date2.Year) ? true : (Date1.Month < Date2.Month) ? true : (Date1.Day < Date2.Day) ? true : false;

	return (Date1.Year < Date2.Year || Date1.Month < Date2.Month || Date1.Day < Date2.Day);
}

int DeffrenceInDaysBtweenYears(sDate Date1, sDate Date2, bool IncludEndDay = false) {

		int DaysDiff = 0;

		if (IncludEndDay)
			DaysDiff++;

		if (Date1.Year == Date2.Year) {

			return DaysFromYearStart(Date2) - DaysFromYearStart(Date1) + DaysDiff;
			
		}
		else if (Date1.Year > Date2.Year) {

			DaysDiff += NumberOfDaysInAYear(Date2.Year) - DaysFromYearStart(Date2);
			Date1.Year--;

			while (Date1.Year > Date2.Year) {

				DaysDiff += NumberOfDaysInAYear(Date1.Year);
				Date1.Year--;
			}

			return (DaysDiff + DaysFromYearStart(Date2)) * -1;

		}
		else {

			DaysDiff += NumberOfDaysInAYear(Date1.Year) - DaysFromYearStart(Date1);
			Date1.Year++;

			while (Date1.Year < Date2.Year) {

				DaysDiff += NumberOfDaysInAYear(Date1.Year);
				Date1.Year++;
			}

			return DaysDiff + DaysFromYearStart(Date2);

		}

}

int main()
{
    
    sDate Date1, Date2;

	Date1.Day = ReadNumber("enter a day: ");
	Date1.Month = ReadNumber("enter a month: ");
	Date1.Year = ReadNumber("enter a Year: ");

	Date2.Day = ReadNumber("enter a day: ");
	Date2.Month = ReadNumber("enter a month: ");
	Date2.Year = ReadNumber("enter a Year: ");

	cout << "deffrent between the two years is: " << DeffrenceInDaysBtweenYears(Date1, Date2) << "days(s)\n";

	return 0;
}

