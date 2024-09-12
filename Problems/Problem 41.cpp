/*

	Write a program to ask the user to enter a number, then 
	Print “ODD” if its odd, Or “Even” if its even.

*/

#include <iostream>
using namespace std;

enum ennumbertype {odd=1,even=2};

int read_number() {

	int number;

	cout << "this program see if the number add or even\n";
	cout << "please enter a number:\n";
	cin >> number;

	return number;
}
ennumbertype check_the_number_type(int num) {

	if (num%2 == 0) {

		return ennumbertype::even;
	}

	else{

		return ennumbertype::odd;

	}

}
void print_number_type(ennumbertype numbertype) {

	if (numbertype == ennumbertype::odd) {

		cout << "this number is odd\n";

	}
	else {

		cout << "this number is even";

	}


}

int main()
{
  

	print_number_type(check_the_number_type(read_number()));

	return 0;

}
