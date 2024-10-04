/*

	Write a program to read a Period and Date, then check if date is within this period or not?

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

	cout << "enter start date:";
	Period.StartDate = ReadDate();

	cout << "\nenter end date:";
	Period.EndDate = ReadDate();

	return Period;

}

bool IsLeapYear(int Year) {

	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

bool IsDate1BeforeDate2(sDate Date1, sDate Date2) {

	//return (Date1.Year < Date2.Year) ? true : (Date1.Month < Date2.Month) ? true : (Date1.Day < Date2.Day) ? true : false;

	return (Date1.Year < Date2.Year || Date1.Month < Date2.Month || Date1.Day < Date2.Day);
}
bool IsDate1AfterDate2(sDate Date1, sDate Date2) {

	return (Date1.Year > Date2.Year) || (Date1.Month > Date2.Month) || (Date1.Day > Date2.Day);

}

bool IsDateWithinThePeriod(sPeriod Period1, sDate Date) {

	return !(IsDate1BeforeDate2(Period1.EndDate, Date) || IsDate1AfterDate2(Period1.StartDate, Date));

}

int main()
{

	sPeriod Period;
	sDate Date;

	cout << "enter period:\n";
	Period = ReadPeriod();

	cout << "\nenter date to check:\n";
	Date = ReadDate();

	if (IsDateWithinThePeriod(Period, Date))
		cout << "\nyes the Date withen the period\n";
	else
		cout << "no the Date is not Withen the period\n";

	return 0;
}
