/*

	Write a program to read a number and check if it is a prime number or not.
	Note: Prime number can only divide on one and on itself.
	
	Input
	5
	6
	3

	Outputs:
	Prime
	Not Prime
	Prime

*/
#include <iostream>

using namespace std;

enum primenumbers {prime=1, NotPrime = 2};

int read_number() {

	int num;

	cout << "rnter a num: ";
	cin >> num;

	return num;
}

primenumbers check_numbertype() {

	int num = read_number();

	for (int i = 2; i <= num/2;i++) {

		if (num % i == 0)
			return NotPrime;

	}

	return prime;

}

void print_numtype(primenumbers num) {

	if (num == prime)
		cout << "this number is prime number.\n";
	else
		cout << "this is not prime number.\n";

}


int main()
{
  
	print_numtype(check_numbertype());



}
