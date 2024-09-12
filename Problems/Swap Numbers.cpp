/*

	Write a program to ask the user to enter:
	• Number1
	• Number2
	Then print the two numbers , then Swap the two numbers and print them
	
	Example Inputs:
	10
	20

	Outputs:
	10
	20
	20
	10


*/

#include <iostream>
using namespace std;

void swap(int& a, int& b) {

	int tmp;

	tmp = a;
	a = b;
	b = tmp;



}
void read_the_swap(int& a, int& b) {

	cout << "what is a?\n";
	cin >> a;

	cout << "what is b\n";
	cin >> b;

}

int main()
{
   
	int a, b;

	read_the_swap(a, b);
	cout << "a before the swap is: " << a << endl;
	cout << "b befor the swap is: " << b << endl;

	swap(a,b);
	cout << "a after the swap is: " << a << endl;
	cout << "b after the swap is: " << b << endl;

}
