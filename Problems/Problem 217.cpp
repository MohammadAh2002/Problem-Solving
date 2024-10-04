/*
 
	Write a program to check if year is a Leap year or not.

	Note: All years which are perfectly divisible by 4 are Leap years except for century years
	(years ending with 00), which are leap years only if they are perfectly divisible by 400.

	Please enter a year to check:
	1900
	No, Year [1900] is NOT a leap year.

	Please enter a year to check:
	2000
	Yes, Year [2000] is a leap year.

*/

#include <iostream>

using namespace std;

int ReadNumber(string massege) {

	cout << massege;

	int num;

	cin >> num;

	return num;

}

bool IsLeapYear(int Year) {

	if (Year % 400 == 0)
		return true;

	else if (Year % 100 == 0)
		return false;

	else if (Year % 4 == 0)
		return true;

	else
		return false;
}

int main()
{
   
	int Year = ReadNumber("eneter the year: ");

	if (IsLeapYear(Year))
		cout << "its a leap year";
	else
		cout << "its not  a leap year";

}
