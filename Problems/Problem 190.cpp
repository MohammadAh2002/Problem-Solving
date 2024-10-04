/*

	Write a program to read Date1 & Date2, and write a function to compare dates, it should return:
	- (-1) Before (Date 1 Before Date 2)
 	- (0) Equal (Date 1 Same as Date 2)
 	- (1) After (Date 1 After Date 2)

*/

#include <iostream>

using namespace std;

struct stDate{ 
	short Year; short Month; short Day;
};

short ReadYear()
{
	short y;
	cout << "PLease enter a year: ";
	cin >> y;
	return y;
}
short ReadMonth()
{
	short m;
	do
	{
		cout << "Please Enter a month: ";
		cin >> m;
	} while (m < 1 || m > 12);

	return m;
}
short ReadDay()
{
	short d;
	do
	{
		cout << "Please Enter a day: ";
		cin >> d;
	} while (d < 1 || d > 31);

	return d;
}
stDate ReadFullDate()
{
	stDate Date;
	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();
	return Date;
}

bool IsDate1BeforeDate2 (stDate Date1, stDate Date2) { 
	return  (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false); 
}
bool IsDate1EqualDate2(stDate Date1, stDate Date2) { return  (Date1.Year == Date2.Year) ? ((Date1.Month == Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false) : false;
}
bool IsDate1AfterDate2(stDate Date1, stDate Date2) { 
	return (!IsDate1BeforeDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));

}

enum enDateCompare{ Before = -1, Equal = 0, After = 1 };
 
enDateCompare CompareDates(stDate Date1, stDate Date2) {

	if (IsDate1BeforeDate2(Date1, Date2))
		return enDateCompare::Before;
	
	if (IsDate1EqualDate2(Date1, Date2))
		return enDateCompare::Equal;
	
	/* if (IsDate1AfterDate2(Date1,Date2))  
	
	return enDateCompare::After;*/
	
	//this is faster

	 return enDateCompare::After;
}


int main()
{
   
	cout << "Enter Date1:\n";
	stDate Date1 = ReadFullDate();

	cout << "\nEnter Date2:\n";
	stDate Date2 = ReadFullDate();

	cout << "\nCompare Result = " << CompareDates(Date1, Date2);

	return 0;
}
