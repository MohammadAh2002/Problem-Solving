/*

	Write a program to print total days from the beginning of year, then Take the total days and 
	convert them back to date. 

*/

#include <iostream>

using namespace std;

struct sDate{

	short Day, Month, Year;

};

bool IsLeapYear(int Year) {

	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

int NumberOfDaysInMonth(int month, int Year) {

	if (month < 1 || month>12)
		return 0;

	int numberofdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	return (month == 2) ? (IsLeapYear(Year) ? 29 : 28) : numberofdays[month - 1];

}

sDate GetDateFromDayOrderInYear (short DateOrderInYear, short Year) { 
	
	sDate Date; 

	short RemainingDays = DateOrderInYear;
	short MonthDays = 0; 

	Date.Year = Year;  
	Date.Month = 1;
	
	while (true) {
		
		MonthDays = NumberOfDaysInMonth(Date.Month, Year);
	
		if (RemainingDays > MonthDays) {

		RemainingDays -= MonthDays;
		Date.Month++;

		} 
		else{

		Date.Day = RemainingDays; 
		break; 
		} 
	} 
	
	return Date;
}

int main()
{
   
	sDate Date;

	Date = GetDateFromDayOrderInYear(120, 2002);

	cout << "Date for [" << 120 << "] is: ";

	cout << Date.Day << "/" << Date.Month << "/" << Date.Year;

	system("pause>0");

	return 0;

}
