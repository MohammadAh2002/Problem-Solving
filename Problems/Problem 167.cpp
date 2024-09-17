/*

	Write a program to read a string then Lowercase the first letter of each word in that string.

	Pleas Enter your string:
	Mohammad Ahmad

	String after Conversion:
	mohammad ahmad

*/

#include <iostream>
#include <string>

using namespace std;

string readstring() {

	string name;

	cout << "what is the string: ";

	getline(cin, name);

	return name;

}

void printeveryfristlattercapital(string name) {

	bool isfirst = true;

	for (int i = 0; i < name.length(); i++) {


		if (isfirst && name[i] != ' ')
			name[i] = tolower(name[i]);

		isfirst = (name[i] == ' ' ? true : false);


	}

	cout << name << endl;

}

int main()
{


	printeveryfristlattercapital(readstring());

	return 0;

}
