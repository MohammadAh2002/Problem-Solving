/*

	 Program to Change Each Character of a String to Its Next Character in the Alphabet.

*/

#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

string read_string() {

	cout << "enter a string: ";

	string next_char;
	cin >> next_char;

	return next_char;

}

void change_to_next_char(string next_char) {

	int counter = 0, chr_to_int;
	char ne_ch;

	do {

		chr_to_int = int(next_char[counter]);

		if (chr_to_int >= 65 && chr_to_int <= 90 || chr_to_int >= 97 && chr_to_int <= 122) {
			ne_ch = char(chr_to_int + 1);
			cout << ne_ch;
		}
		else
			cout << chr_to_int;

		counter++;

	} while (counter != next_char.length());



}

int main()
{
   

	change_to_next_char(read_string());


}
