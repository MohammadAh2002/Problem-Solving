/*

	Write a program to print numbers from N to 1.
	
	Input:
	10

	Outputs:
	10
	9
	8
	7
	6
	5
	4
	3
	2
	1

*/

#include <iostream>
using namespace std;

void read_number(int& num) {

	cout << "what is the number?\n";
	cin >> num;

}
void print_revers_ForLoop(int num) {

	for (int i = num; i >= 1; i--) {


		cout << i << " ";

	}

	cout << endl;
}
void print_revers_WhileLoop(int num) {

	int i = num;

	while (i>=1) {

		cout << i << " ";
		i--;
	}

	cout << endl;

}
void print_revers_DoWhileLoop(int num) {

	int i = num;

	do{
	
		cout << i << " ";
		i--;
	
	
	} while (i >= 1);

	cout << endl;
}


int main()
{
	int num;
	read_number(num);

	print_revers_ForLoop(num);
	print_revers_WhileLoop(num);
	print_revers_DoWhileLoop(num);

}
