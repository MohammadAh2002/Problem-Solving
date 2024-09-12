/*

	Write a program to ask the user to enter:
	• Number
	Then Print the “Half of the <Number> is <???>”.
	
	Example Inputs:
	60
	50
	Outputs:
	Half of 60 is 30
	Half of 50 is 25

*/

#include <iostream>
#include <string>
using namespace std;

int read_num() {

	int number;

	cout << "what is the number: ";
	cin >> number;

	return number;


}
float half_the_number(int number) {


	float halfnum;

	halfnum = (float) number / 2;

	return halfnum;


}
void print_half_num(int number) {

	float halfnumber = half_the_number(number);

	cout << "half the "<< to_string(number) << " you wrote is: " << halfnumber << endl;


}


int main()
{
   
	print_half_num(read_num());


}
