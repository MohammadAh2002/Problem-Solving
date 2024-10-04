/*

	Write a program to read Two Periods and check if they overlap or not?

*/

#include <iostream>

using namespace std;

struct sDate
{
	short Year;
	short Month;
	short Day;
};

struct sPeriod {

	sDate StartDate, EndDate;

};

short ReadDay()
{
	short Day;
	cout << "\nPlease enter a Day? ";
	cin >> Day;
	return Day;
}
short ReadMonth()
{
	short Month;
	cout << "Please enter a Month? ";
	cin >> Month;
	return Month;
}
short ReadYear()
{
	short Year;
	cout << "Please enter a Year? ";
	cin >> Year;
	return Year;
}
sDate ReadFullDate()
{
	sDate Date;
	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();
	return Date;
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

sPeriod ReadPeriod() {

	sPeriod Period;

	cout << "enter start date:";
	Period.StartDate = ReadFullDate();

	cout << "\nenter end date:";
	Period.EndDate = ReadFullDate();

	return Period;

}

int main()
{
	sPeriod Period1, Period2;

	cout << "enter period 1:\n";
	Period1 = ReadPeriod();

	cout << "\nenter period 2:\n";
	Period2 = ReadPeriod();

	if (IsOverlapPeriods(Period1, Period2))
		cout << "Yes, Periods Overlap";
	else
		cout << "no, Periods is not Overlap";

	system("pause>0");
	return 0;

}