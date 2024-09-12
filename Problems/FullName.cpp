/*

	Write a program to ask the user to enter:
	• First Name
	• Last Name
	Then Print Full Name on screen.
	
	Example Input:
	Mohammad
	Ahmad
	
	Output:
	Mohammad Ahmad

*/

#include <iostream>
using namespace std;

string read_full_name() {

	string name, last_name;

	cout << "what is your name: ";
	cin >> name;

	cout << "what is your last name: ";
	cin >> last_name;

	return name + " " + last_name;

}

void print_name(string name) {

	cout << "your name is: " << name;

}


int main()
{
   

	print_name(read_full_name());




}
