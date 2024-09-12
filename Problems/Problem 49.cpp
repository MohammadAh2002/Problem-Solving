/*

	Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the
	balance to user, otherwise print “Wong PIN” and ask the user to enter the PIN again.
	Assume User Balance is 7500.
	
	Input:
	1234
	5151

	Outputs:
	Your Balance is: 7500
	Wrong PIN

*/

#include <iostream>
using namespace std;


int read_pin(string massege) {


	cout << massege;

	int pin;

		do{
		
			cin >> pin;
		
		} while (pin <= 0);

		return pin;

}

bool chek_pin() {

	int pin = read_pin("enter your pin: ");

	return pin == 1234;

}

void print_the_result() {

	if (chek_pin() == true) {
	
		system("color 2f");
		cout << "your balce is: 7500\n";
	}

	else
		system("color 4f");
		cout << "wrong pin\n";

}

int main()
{
   

	print_the_result();



}
