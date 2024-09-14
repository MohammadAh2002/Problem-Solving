/*

	Write a program to print all perfect numbers from 1 to N

	Input:
	500

	Output:
	6
	28
	496

*/

#include <iostream>
using namespace std;

enum enperfectnumber { perfect = 1, notperfect = 2 };

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

	for (int i = 1; i <= number; i++)
	{ 

	if (check_perfectorno(i) == enperfectnumber::perfect)
		cout << i << " is a prefect number\n";
	}

	}

int main()
{

	int number = read_number("please enter a number: ");

	print_result(number);


}
