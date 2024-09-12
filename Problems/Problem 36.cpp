/*

	Write a program to ask the user to enter:
	• Number
	Then Print the Number^2 , Number^3 , Number^4
	
	Example Inputs:
	3

	Outputs:
	9
	27
	81

*/

#include <iostream>
using namespace std;

void read_num(int& num) {

	cout << "what is the number?\n";
	cin >> num;
}

int pow_of_2(int num) {

	return num * num;

}

int pow_of_3(int num){
	return num * num * num;
}

int pow_of_4(int num) {
	return num * num * num * num;
}

void print_result(int number) {
	cout << number << endl;
}

int main()
{
	int num;

	read_num(num);

	print_result(pow_of_2(num));
	print_result(pow_of_3(num));
	print_result(pow_of_4(num));

}
