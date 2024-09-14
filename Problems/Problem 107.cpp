/*

	Write a program to dynamically read numbers and save them in an array Max size of array is 100,
	allocate simi-dynamic array length.

	Output:

	Please enter a number?
	10
	Do you want to add more numbers? [0]:No, [1]:yes? 1

	Please enter a number?
	20
	Do you want to add more numbers? [0]:No.[1]:yes? 1

	Please enter a number?
	30
	Do you want to add more numbers? [0]:No.[1]:yes? O

	Array Length: 3
	Array elements: 10 20 30

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int read_number(string massege) {

	cout << massege;

	int number;
	cin >> number;

	return number;

}

bool if_want_to_add() {

	int number;

	cout << "do you want to continue? [0]no/[1]yes: ";
	cin >> number;

	if (number == 0)
		return false;
	else
		return true;
}

void print_aray(int arr[], int arrlenth) {

	for (int i = 0; i < arrlenth; i++) {

		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{

	bool continueorno;
	int arr[100], arrlenth = 0;

	do{

		int number = read_number("wnter a number: ");
		arr[arrlenth] = number;
		arrlenth += 1;

		continueorno = if_want_to_add();

	} while (continueorno == true);

	cout << "array lenth is: " << arrlenth << endl;
	print_aray(arr, arrlenth);

}


