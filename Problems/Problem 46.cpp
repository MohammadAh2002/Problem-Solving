/*

	Write a program to print all letters from A to Z
	
	Outputs:
	A
	B
	C
	.
	.
	.
	Z

*/

#include <iostream>
using namespace std;

void print_all_latters() {

	for (int i = 65; i <= 90; i++) {

		cout << (char)i << endl;

	}



}

int main()
{
	
	
	print_all_latters();

	return 0;
	
}

