/*

	Write a program to read numbers from user and sum them,
	keep reading until the user enters -99 then print the Sum on screen.
	
	Input:
	10
	20
	30
	40-99

	Outputs:
	100

*/

#include <iostream>
using namespace std;

int read_num() {

	int num;

	cout << "enter a num: ";
	cin >> num;

	return num;

}


int check_numbers() {

	cout << "we will add all the numbers and we will stop when you enter -99\n";

	int num = 0, sum=0;
	do {

		sum += num;

		num = read_num();

	} while (num != -99);

	return sum;
}



int main()
{
   
	cout << "the sum is: " << check_numbers() << endl;


}
