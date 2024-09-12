/*

	Write a program to ask the user to enter:
	• TotalSales

	The commission is calculated as one percentage * the total sales amount,
	all you need is to decide which percentage
	
	to use of the following:
	• > 1000,000 -> Percentage is 1%
	• > 500K to 1M -> Percentage is 2%
	• > 100K  – 500K -> Percentage is 3%
	• > 50K to 100K -> Percentage is 5%
	• Otherwise -> Percentage is 0%
	
	Example Inputs:
	110,000

	Outputs:
	3,300

*/

#include <iostream>
using namespace std;


void read_tosa(int& totalsales) {

	cout << "what is your total sales?\n";
	cin >> totalsales;

}
float  check_precent(float totalsales) {

	if (totalsales > 1000000)
		return 0.01;
	else if (totalsales > 500000 && totalsales <= 1000000)
		return 0.02;
	else if (totalsales > 100000 && totalsales <= 500000)
		return 0.03;
	else if (totalsales > 50000 && totalsales <= 100000)
		return 0.05;
	else
		return 0;

}

float check_after_precent(int totalsales) {

	if (totalsales > 1000000)
		return totalsales * 0.01;
	else if (totalsales > 500000 && totalsales <= 1000000)
		return totalsales * 0.02;
	else if (totalsales > 100000 && totalsales <= 500000)
		return totalsales * 0.03;
	else if (totalsales > 50000 && totalsales <= 100000)
		return totalsales * 0.05;
	else
		return 0;
}

void print_precent(float precent, float precent2) {

	cout << "tour precent is: " << precent2 << endl;
	cout << "your precent is: " << precent << endl;
}

int main()
{
   
	int totalsales;

	read_tosa(totalsales);

	print_precent(check_after_precent(totalsales), check_precent(totalsales));

}
