/*

	Write a program to calculate factorial of N!
	Example: factorial of 6 -> 6 x 5 x 4 x 3 x 2 x 1 = 720
	
	Note: User should only enter positive number, other wise reject it and ask to enter again
	
	Input:
	6
	
	Outputs:
	720

*/

#include <iostream>
using namespace std;

void read_number(int& num) {

	cout << "what is the number: ";
	cin >> num;
}
int calculate_factorial(int num) {

	int faco = 1;


	for (int i = 1; i <= num; i++) {

		faco *= i;

	}

	return faco;
}
void print_the_factorial(int num, int faco) {

	cout << "the foctorail of " << num << " is:" << faco << endl;

}


int main()
{
   
	int fnum;

	read_number(fnum);
    print_the_factorial(fnum, calculate_factorial(fnum));

}
