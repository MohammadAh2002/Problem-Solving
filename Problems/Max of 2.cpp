/*

	Write a program to ask the user to enter:
	• Number1 , Number2
	Then Print the Max Number
	
	Example Inputs:
	10
	20
	
	Outputs:
	20

*/

#include <iostream>
using namespace std;

void read_nums(int& num1, int& num2) {

	cout << "what is the  first number?\n";
	cin >> num1;

	cout << "what is the second number ? \n";
	cin >> num2;
}
void max_num_is(int num1, int num2) {

	if (num1 > num2)
		cout << "the first number is bigger";
	else if (num2 > num1)
		cout << "the second number is biger";
	else
		cout << "they are the same";
}

int main()
{
   
	int num1, num2;

	read_nums(num1,num2);
	max_num_is(num1,num2);


}
