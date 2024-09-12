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

struct strtime{

	int days, hours, minuts, seconds;

};


int read_number(string massege) {

	cout << massege;

	int number;
	cin >> number;

	return number;

}
strtime read_time() {

	strtime tasktime;

	tasktime.days = read_number("how many days: ");
	tasktime.hours = read_number("how many hours: ");
	tasktime.minuts = read_number("how many minuts: ");
	tasktime.seconds = read_number("how many seconds: ");

	return tasktime;

}
int calculate_the_time(strtime tasktime) {

	int tasktimeinseconds = 0;

	tasktimeinseconds = tasktime.days * 24 * 60 * 60;
	tasktimeinseconds += tasktime.hours * 60 * 60;
	tasktimeinseconds += tasktime.minuts * 60;
	tasktimeinseconds += tasktime.seconds;

	return tasktimeinseconds;

}



int main()
{
  

	cout << "the total seconds is: " << calculate_the_time(read_time());




}
