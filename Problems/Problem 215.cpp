/*

	Write a program to print Number of: Days - Hours - Minutes - Seconds in a certain year.

	Please enter a year to check:
	2000

	Number of Days in Year [2000] is 366
	Number of Hours in Year [2000] is 8784
	Number of Minutes in Year [2000] is 527040
	Number of Seconds in Year [2000] is 31622400

	Please enter a year to check:
	1900

	Number of Days in Year [1900] is 365
	Number of Hours in Year [1900] is 8760
	Number of Minutes in Year [1900] is 525600
	Number of Seconds in Year [1900] is 31536000

*/

#include <iostream>

using namespace std;

bool IsLeapYear(int Year) {

	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

int ReadNumber(string massege) {

	cout << massege;

	int num;

	cin >> num;

	return num;

}

void PrintYearDatils(int year) {

	if (IsLeapYear(year)) {

		printf("number of days in year[%d] is 366\n",year);
		printf("number of hours in year[%d] is 8784\n", year);
		printf("number of minuts in year[%d] is 527040\n", year);
		printf("number of seconds in year[%d] is 31622400\n", year);

	}
	else {

		printf("number of days in year[%d] is 365\n", year);
		printf("number of hours in year[%d] is 8760\n", year);
		printf("number of minuts in year[%d] is 525600\n", year);
		printf("number of seconds in year[%d] is 31536000\n", year);

	}

}

int main()
{

	int Year = ReadNumber("enter the year:");

	PrintYearDatils(Year);

	return 0;

}
