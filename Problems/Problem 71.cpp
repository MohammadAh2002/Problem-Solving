/*

	Write a program to read a number and print inverted pattern as follows:

	Input 1:
	3

	Output 1:
	333
	22
	1

	Input 2:
	5

	Output 2:
	55555
	4444
	333
	22
	1

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

	for (int i = number; i >= 1; i--) {

		for (int j = 1; j <= i;j++) {

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
