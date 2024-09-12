/*

	Write a program to ask the user to enter:
	• Number
	• M
	Then Print the Number^M
	
	Example Inputs:
	2
	4

	Outputs:
	16

*/

#include <iostream>
using namespace std;

void read_num_power(int& num, int& pow) {

	cout << "what is the number?";
	cin >> num;

	cout << "what is the power?";
	cin >> pow;

}
int calculate_pow(int num, int pow) {

	if (pow == 0)
		return 1;
	else {

		int x = num;

		for (int i = 1; i < pow; i++) {

			num *= x;
		}
	}
	return num;
}
void print_result(int num) {

	cout << "the result is: " << num << endl;

}

int main()
{
   
	int num, pow;

	read_num_power(num, pow);

	print_result(calculate_pow(num, pow));


}
