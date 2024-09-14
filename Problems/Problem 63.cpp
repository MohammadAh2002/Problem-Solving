/*

	Write a program to print random Small Letter, Capital Letter, Special Character, and Digit in order.

	Output:
	i
	G
	$
	7

*/

#include <iostream>
#include <cstdlib>
using namespace std;

enum enrandom { small_latter = 1, capital_latter = 2,
				spical_char = 3, digit = 4 };

int RandomNumber(int From, int To) {

	int randNum = rand() % (To - From + 1) + From;
	return randNum;

}

char Random_spical_char(int From, int To) {

	char randNum = char(rand() % (To - From + 1) + From);
	return randNum;

}

char Random_small_latter(int From, int To) {

	char randNum = char(rand() % (To - From + 1) + From);
	return randNum;

}

char Random_capital_latter(int From, int To) {

	char randNum = char(rand() % (To - From + 1) + From);
	return randNum;

}

int main()
{
	srand((unsigned)time(NULL));

	cout << Random_small_latter(97, 122) << endl;
	cout << Random_capital_latter(65, 90) << endl;
	cout << Random_spical_char(33,47) << endl;
	cout << RandomNumber(0, 9) << endl;

}

