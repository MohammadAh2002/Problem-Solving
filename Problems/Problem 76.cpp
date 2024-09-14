/*

	Write a program to read a number and print the sum of its digits.

	Input:
	1234

	Output:
	Sum Of Digits = 10

*/

#include <iostream>
using namespace std;

int read_number(string massege)  {

	cout << massege;

	int number;
	cin >> number;

	return number;
}

int number_in_revers_sum(int number) {

	int sum = 0;

	while (number > 0) {

		int reminder = number % 10;
		number /= 10;
		sum += reminder;
	}

	return sum;

}

void print_sum(int sum) {

	cout << "the sum of the digets is: " << sum;

}

int main()
{

	int number = read_number("please enter a number: ");

	print_sum(number_in_revers_sum(number));


}
