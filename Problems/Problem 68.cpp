/*

	Write a program to read a number and print inverted letter pattern as follows?

	Input 1:
	3

	Output 1:
	A
	BB
	CCC

	Input 2:
	5

	Output 2:
	A
	BB
	CCC
	DDDD
	EEEEE

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

	for (int i = 65 ; i <= number + 64 ; i++) {

		for (int j = 1; j <= i - 65 +1; j++) {

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