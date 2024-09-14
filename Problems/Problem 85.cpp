/*

	Write a Program to Tell you if the Number is positive or negative.

*/

#include <iostream>
using namespace std;

enum enuNumberSingned {plus = 1, minos = 2, NoSighned = 3};

int read_number(string massege) {

	cout << massege;

	int number;
	cin >> number;

	return number;
}

enuNumberSingned check_number_sighned(int number) {

	if (number > 0)
		return enuNumberSingned::plus;
	else if (number < 0)
		return enuNumberSingned::minos;
	else
		return enuNumberSingned::NoSighned;
}

void print_result(enuNumberSingned sighned) {

	if (sighned == enuNumberSingned::plus)
		cout << "this is a positive number.";
	else if (sighned == enuNumberSingned::minos)
		cout << "this is a negative number.";
	else
		cout << "this is (0).";


}


int main()
{
  
	enuNumberSingned sighned = check_number_sighned(read_number("please enter a number: "));

	print_result(sighned);

}
