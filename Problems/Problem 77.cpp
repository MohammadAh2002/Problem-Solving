/*

	Write a program to read a number and print it in a reversed order.

	Input:
	1234

	Output:
	4
	3
	2
	1

*/

#include <iostream>
#include <string>
using namespace std;

int read_number(string massege) {

	cout << massege;

	int number;
	cin >> number;

	return number;
}

string int_to_string(int number) {

	return to_string(number);

}

void print_string_revers(string numstring) {

	for (int i = 3; i >= 0; i--) {

		cout << numstring[i] << endl;

	}
}

int main()
{
   
	int number = read_number("please enter a number: ");

	print_string_revers((int_to_string(number)));

	return 0; 

}
