/*

	Write a program to read how many keys to generate and fill them in array then print them on the screen.

	Input:
	5

	Output:
	Array elements:
	Array[0]: NRXC-DXRO-QEAM-WRWE
	Array[1]: BJTR-KIKF-ATEW-WNTT
	Array[2]: QOFX-KZEL-SSDP-AKSI
	Array[3]: GFOI-ELFX-ZCVE-PSTP
	Array[4]: MATF-PRQA-PQEQ-TRIM

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

string genrate_word(enCharType chartype, short lenth) {

	string word;

	for (int i = 1; i <= lenth; i++)
	{
		word = word + get_random_char(enCharType::CapitalLetter);

	}
	return word;
}

string genratekey() {

	string key;

	key = genrate_word(enCharType::CapitalLetter, 4) + "-";
	key = key + genrate_word(enCharType::CapitalLetter, 4) + "-";
	key = key + genrate_word(enCharType::CapitalLetter, 4) + "-";
	key = key + genrate_word(enCharType::CapitalLetter, 4);

	return key;

}

void fill_array_with_key(string arr[], int arrlenth) {

	for (int i = 0; i < arrlenth; i++) {

		arr[i] = genratekey();

	}
}

void print_aray(string arr[], int arrlenth) {

	for (int i = 0; i < arrlenth; i++) {
		
		cout << "Array[" << i << "]: ";
		cout << arr[i] << endl;
	}
	cout << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	int arrlenth = read_number("enter a number: ");
	string arr[100];
	fill_array_with_key(arr, arrlenth);

	print_aray(arr, arrlenth);

	return 0;

}
