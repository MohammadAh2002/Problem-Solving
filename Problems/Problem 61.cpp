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

enum enCharType{ SamallLetter = 1, CapitalLetter = 2,
				 SpecialCharacter = 3, Digit = 4 };

int RandomNumber(int From, int To) {

	int randNum = rand() % (To - From + 1) + From;
	return randNum;

}

char get_random_char(enCharType chartype) {

	switch (chartype) {

	case enCharType::CapitalLetter:
	{
		return char (RandomNumber(65,90));
			break;
	}
	case enCharType::SamallLetter:
	{
		return char (RandomNumber(97,122));
			break;
	}
	case enCharType::SpecialCharacter:
	{
		return char (RandomNumber(33,47));
			break;
	}
	case enCharType::Digit:
	{
		return char (RandomNumber(48,57));
			break;
	}

		}
}


int main()
{
	srand((unsigned)time(NULL));

	cout << get_random_char(enCharType::SamallLetter) << endl;
	cout << get_random_char(enCharType::CapitalLetter) << endl;
	cout << get_random_char(enCharType::SpecialCharacter) << endl;
	cout << get_random_char(enCharType::Digit) << endl;

	return 0;

}
