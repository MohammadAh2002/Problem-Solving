/*

	Write a program to read how many keys to generate and print them on the screen.

	Input: 5

	Output:
	Key [1]: ETAI-HJUV-PEIP-CFRX
	Key [2]: UMCO-YSPQ-PHYK-STIL
	Key [3]: QBSR-MZEC-BYNA-DSYK
	Key [4]: MISQ-ULYB-ZRAZ-LMAG
	Key [5]: NQCR-PPFJ-KZLF-ZHMT

*/

#include <iostream>
#include <cstdlib>

using namespace std;

enum enCharType {
	SamallLetter = 1, CapitalLetter = 2,
	SpecialCharacter = 3, Digit = 4
};

int read_number(string massege) {

	cout << massege;

	int number;
	cin >> number;

	return number;
}

int RandomNumber(int From, int To) {

	int randNum = rand() % (To - From + 1) + From;

	return randNum;

}

char get_random_char(enCharType chartype) {

	switch (chartype) {

	case enCharType::CapitalLetter:
	{
		return char(RandomNumber(65, 90));
		break;
	}
	case enCharType::SamallLetter:
	{
		return char(RandomNumber(97, 122));
		break;
	}
	case enCharType::SpecialCharacter:
	{
		return char(RandomNumber(33, 47));
		break;
	}
	case enCharType::Digit:
	{
		return char(RandomNumber(48, 57));
		break;
	}
	}
}

void print_key(int number) {

	for (int i = 1; i <= number; i++) {

		cout << "key[" << i << "]: ";

		for (int j = 1; j <= 16; j++) {

			cout << get_random_char(enCharType::CapitalLetter);

			if (j == 16)
				break;

			if (j % 4 == 0 ) {
				cout << "-";
				continue;
			}

		}
			cout << endl;
	}
}
	

int main()
{
	srand((unsigned)time(NULL));

	int number = read_number("enter a number: ");

	print_key(number);

	return 0;

}
