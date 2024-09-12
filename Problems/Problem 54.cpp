/*

	Write a program to read a NumberOfHours and calculates the number of weeks,
	and days included in that number
	
	Input:
	365

	Outputs:
	2.17 Weeks
	15.20 Days

*/

#include <iostream>
using namespace std;

void read_numberofhours(int& hours) {

	cout << "how manny hours?\n";
	cin >> hours;

}
float calculate_days(int hours) {

	return (float)hours / 24;

}
float daytoweeks(float days) {
	return days / 7;
}

int main()
{

	int hours;
   
	read_numberofhours(hours);

	float days = calculate_days(hours);
	float weeks = daytoweeks(days);


	cout << "number of days in " << hours << " hours is: " << days << endl;
	cout << "number of weeks in " << hours << " hours is: " << weeks << endl;
}

