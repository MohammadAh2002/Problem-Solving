/*

	Write a program to read a number and print inverted pattern as follows?

	Input 1:
	3

	Output 1:
	1
	22
	333

	Input 2:
	5

	Output 2:
	1
	22
	333
	4444
	55555

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

	for (int i = 1; i <= number; i++) {

		for (int j = 1; j <= i; j++) {

			cout << i;

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
