/*

	Write a program to calculate the task duration in seconds and print it on screen
	-> Given the time duration of a task in the number of days, hours, minutes, and seconds,.
	
	Input:
	2
	5
	45
	35

	Outputs:
	193,535 Seconds

*/

#include <iostream>
using namespace std;

int read_number(string massege) {

	cout << massege;

	int number;
	cin >> number;

	return number;
}
int daystoseconds() {

	int days = read_number("how many days: ");

	return days * 86400;
}
int hourstoseconds() {

	int hours = read_number("how many hours: ");

	return hours * 3600;
}
int minutstoseconds() {

	int minuts = read_number("how many minuts: ");

	return minuts * 60;
}
int read_seconds() {

	int seconds = read_number("how many seconds: ");

	return seconds;
}




int main()
{
	int total_seconds;
   
	total_seconds = daystoseconds();
	total_seconds += hourstoseconds();
	total_seconds += minutstoseconds();
	total_seconds += read_seconds();

	cout << "the total seconds is: " << total_seconds << endl;

}
