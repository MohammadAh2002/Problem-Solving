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
int RandomNumber(int From, int To) {

	int randNum = rand() % (To - From + 1) + From;
	return randNum;

}
int read_number(string massege) {

    cout << massege;

    int number;
    cin >> number;

    return number;

}
void print_aray(string arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        cout << "array[" << i << "]: " << arr[i] << endl;;

    }
}
char GetRandomCharacter(enCharType CharType) {

    switch (CharType) {

        case enCharType::SamallLetter:
        {
            return char(RandomNumber(97, 122));
            break;
        }
        case enCharType::CapitalLetter:
        {
            return char(RandomNumber(65, 90));
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
string get_word() {

    string word;
    
    word = GetRandomCharacter(enCharType::CapitalLetter);
    word += GetRandomCharacter(enCharType::CapitalLetter);
    word += GetRandomCharacter(enCharType::CapitalLetter);
    word += GetRandomCharacter(enCharType::CapitalLetter);

    return word;
}
string get_key() {

    string key;

    key = get_word() + "-";
    key += get_word() + "-";
    key += get_word() + "-";
    key += get_word();

    return key;
}
void fill_array_with_keys(string arr[],int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        arr[i] = get_key();

    }
}

int main()
{
	srand((unsigned)time(NULL));

    string arr[100];
    int arrlenth = read_number("enetr number of keys: ");

    fill_array_with_keys(arr, arrlenth);


    cout << "array elemnts is:\n";
    print_aray(arr, arrlenth);
}
