/*

	Write a program to read a string then Uppercase the first letter of each word in that string.

	Pleas Enter your string:
	mohammad ahmad

	String after Conversion:
	Mohammad Ahmad

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
			name[i] = toupper(name[i]);

		isfirst = (name[i] == ' ' ? true : false);


	}

	cout << name << endl;

}

int main()
{


	printeveryfristlattercapital(readstring());

	return 0;

}