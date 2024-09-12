/*

	Write a program to ask the user to enter 3 numbers:
	• A
	• B
	• C
	Then Print Max number.
	
	Example Inputs:
	30
	10
	20
	
	Output:
	30

*/

#include <iostream>
using namespace std;

void read_nums(int& num1, int& num2, int& num3) {

	cout << "what is the  first number?\n";
	cin >> num1;

	cout << "what is the second number ? \n";
	cin >> num2;

	cout << "what is the therd number ? \n";
	cin >> num3;
}
int max_num_is(int num1, int num2, int num3) {

	if (num1 > num2 && num1 > num3)
		return num1;
	else if (num2 > num1 && num2 > num3)
		return num2;
	else
		return num3;
}
void print_the_max_num(int maxnum) {

	cout << "the max number is: " << maxnum;
}


int main()
{

	int num1, num2, num3;

	read_nums(num1, num2, num3);
	print_the_max_num(max_num_is(num1, num2, num3));


}
