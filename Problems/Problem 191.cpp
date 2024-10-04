/*

	Write a program to read Date1 & Date2, and check if Date1 is after Date2 or not.

*/

#include <iostream>

using namespace std;

struct sDate
{
	short Year;
	short Month;
	short Day;
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

bool IsDate1AfterDate2(sDate Date1, sDate Date2) {

	return (Date1.Year > Date2.Year) || (Date1.Month > Date2.Month) || (Date1.Day > Date2.Day);

}

int main()
{
   
	cout << "\nEnter Date1:";
	sDate Date1 = ReadFullDate();

	cout << "\nEnter Date2:";
	sDate Date2 = ReadFullDate();

	if (IsDate1AfterDate2(Date1, Date2))
		cout << "\nYes, Date1 is After Date2.";
	else
		cout << "\nNo, Date1 is NOT After Date2.";
	
	system("pause>0");
	return 0;
	
}
