/*

	Write a program to ask the user to enter:
	• Month
	
	Then print the day as follows:
	• 1 Print January
	• 2 Print February
	• 3 Print March
	• 4 Print April
	• 5 Print May
	• 6 Print June
	• 7 Print July
	• 8 Print August
	• 9 Print September
	• 10 Print October
	• 11 Print November
	• 12 December
	• Otherwise print “Wrong Month” and ask the use to enter the Month again.
	 
	Example Inputs:
	11

	Outputs:
	November

*/

#include <iostream>
using namespace std;

enum enmonthes{jan=1,feb=2,mar=3,apr=4,may=5,jun=6,jul=7,
			   agu=8,sap=9,oct=10,nov=11,dec=12};

int read_number(string massege) {

	cout << massege;

	int x;
	cin >> x;

	return x;
}

enmonthes inttoenmonthes(int month) {

		return (enmonthes)month;
}

string check_month (int month) {

	switch (month) {

	case enmonthes::jan:
		return "its janary\n";
	case enmonthes::feb:
		return "its februry\n";
	case enmonthes::mar:
		return "its mars\n";
	case enmonthes::apr:
		return "its april\n";
	case enmonthes::may:
		return "its may\n";
	case enmonthes::jun:
		return "its junary\n";
	case enmonthes::jul:
		return "its july\n";
	case enmonthes::agu:
		return "its aguset\n";
	case enmonthes::sap:
		return "its septemper\n";
	case enmonthes::oct:
		return "its october\n";
	case enmonthes::nov:
		return "its november\n";
	case enmonthes::dec:
		return "its december\n";
	}
}

int main()
{
   

	cout << check_month(inttoenmonthes(read_number("what is the month?")));


}

