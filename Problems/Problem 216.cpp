/*

	Write a program to check if year is a Leap year or not.

	Note: All years which are perfectly divisible by 4 are Leap years except for century years
	(years ending with 00), which are leap years only if they are perfectly divisible by 400.

	Solve the problem with one line of code only.
	Note: Use Logical Operators.

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

	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);

}

int main()
{

	int year = ReadNumber("enter a year: ");

	if (IsLeapYear(year))
		cout << "yes its a leap year\n";
	else
		cout << "no its not a leap year\n";

}
