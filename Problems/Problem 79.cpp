/*

	Write a program to read a number and print it reversed.

	Input:
	1234

	Output:
	Reverse is: 4321

*/

#include <iostream>
using namespace std;

int read_number(string massege) {

	cout << massege;

	int number;
	cin >> number;

	return number;

}

int number_reversed(int number) {

	int reminder, sum=0; 

	while (number > 0) {

		reminder = number % 10;
		number /= 10;

		sum = sum * 10 + reminder;
	      
	}
	return sum;
	
}

void print_reasult(int renumber) {


	cout << "the number is revers: " << renumber << endl;;


}


int main()
{
   
	int number = read_number("enter a number: ");


	print_reasult(number_reversed(number));

}
