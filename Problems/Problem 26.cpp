/*

	Write a program to print numbers from 1 to N.
	
	Input:
	10

	Outputs:
	1
	2
	3
	4
	5
	6
	7
	8
	9
	10

*/

#include <iostream>
using namespace std;

void read_number(int& num) {

	cout << "what is the nymber?\n";
	cin >> num;
}

void print_for_loop(int num) {


	for (int i = 1; i <= num; i++) {

		cout << i << " ";

	}
	 
	cout << endl;

}

void print_while_loop(int num) {


	int i = 1;

	while (i <= num) {

		cout << i << " ";
		i++;

	}
	cout << endl;
}

void print_DoWhile(int num) {

	int i = 1;

	do{
	
		cout << i << " ";
		i++;
	
	} while (i <= num);

	cout << endl;
}


int main()
{

	int num;

	read_number(num);

	print_for_loop(num);
	print_while_loop(num);
	print_DoWhile(num);

}
