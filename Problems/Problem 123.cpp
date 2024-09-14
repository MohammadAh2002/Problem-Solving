/*

	Write a program to read a number and print inverted letter pattern as follows?

	Input 1: 
	3

	Output 1:
	CCC
	BB
	A

	Input 2:
	5

	Output 2:
	EEEEE
	DDDD
	CCC
	BB
	A

*/

#include <iostream>
using namespace std;

int read_number(string massege) {

	cout << massege;

	int number;
	cin >> number;

	return number;

}

void print_inverted_pattern(int number) {

	for (int i = 64 + number; i >= 65; i--) {

		for (int j = 1; j <= number - (64 + number - i); j++ ) {

			cout << char(i);
		
		}

		cout << endl;
	}
}

int main()
{

	int number = read_number("enter a number: ");

	print_inverted_pattern(number);

	return 0;

}
