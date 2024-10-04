/*

	Write a program to read Date1, Date2 and Check if Date1 is Less Than Date2.

*/

#include <iostream>

using namespace std;

struct sDate{

	short Year;
	short Month;
	short Day;

};

int ReadNumber(string massege) {

	cout << massege;

	int num;

	cin >> num;

	return num;

}

bool IsDate1BeforeDate2(sDate Date1,sDate Date2) {

	//return (Date1.Year < Date2.Year) ? true : (Date1.Month < Date2.Month) ? true : (Date1.Day < Date2.Day) ? true : false;

	return (Date1.Year < Date2.Year || Date1.Month < Date2.Month || Date1.Day < Date2.Day);
}

int main()
{
   
	sDate Date1, Date2;

	Date1.Day = ReadNumber("enetr a day: ");
	Date1.Month = ReadNumber("enetr a month: ");
	Date1.Year = ReadNumber("enetr a Year: ");

	Date2.Day = ReadNumber("enetr a day: ");
	Date2.Month = ReadNumber("enetr a month: ");
	Date2.Year = ReadNumber("enetr a Year: ");

	if (IsDate1BeforeDate2(Date1, Date2))
		cout << "Yes, Date1 is less than Date2.\n";
	else
		cout << "No, Date1 is not less than Date2.\n";



	return 0;
}
