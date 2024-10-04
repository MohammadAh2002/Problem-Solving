/*

	Write a program to read a date, and print the day name of week.

*/

#include <iostream>

using namespace std;

int ReadNumber(string massege) {

	cout << massege;

	int num;

	cin >> num;

	return num;

}

int DayOrder(int year, int month, int day) {

	int a;

	a = (14 - month) / 12;

	year = year - a;
	month = month + (12 * a) - 2;

	return (day + year + (year / 4) - (year / 100) + (year / 400) + ((31 * month) / 12)) % 7;

}

string DayName(int DayNum) {

	string Days[7] = {"sunday","monday","tusday", "wensday",
					  "thersday","friday","satarday"};

	return Days[DayNum];
}

int main()
{

	int year = ReadNumber("enter a year: ");
	int month = ReadNumber("enter a month: ");
	int day = ReadNumber("enter a day: ");

	int DayNumber = DayOrder(year, month, day);

	printf("date     : %d/%d/%d\n", day, month, year);
	printf("day order: %d\n",DayNumber);
	cout << "day name : " << DayName(DayNumber) << endl;

	return 0;

}
