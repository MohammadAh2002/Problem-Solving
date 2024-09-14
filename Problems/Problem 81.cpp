/*

	Write a program to check if the number is Prefect or not?
	
	Note: Perfect Number = Sum (all divisors)
	28 = 1 + 2 + 4 + 7 + 14
	6 = 1 + 2 + 3

	Input:
	28
	12

	Output:
	28 is perfect.
	12 is not perfect.

*/

#include <iostream>
using namespace std;

enum enperfectnumber{perfect = 1, notperfect = 2};

int read_number(string massege) {

	cout << massege;

	int number;
	cin >> number;

	return number;
}

enperfectnumber check_perfectorno(int number) {

	int sum = 0;

	for (int i = 1; i < number; i++) {

		if (number % i == 0) {

			sum += i;
		}
	}

	if (sum == number)
		return enperfectnumber::perfect;
	else
		return enperfectnumber::notperfect;
}

void print_result(int number) {

	if (check_perfectorno(number) == enperfectnumber::perfect)
		cout << number << " is a prefect number\n";
	else
		cout << number << " is not a prefect number\n";
}

int main()
{

	int number = read_number("please enter a number: ");

	print_result(number);


}
