/*

	Write a program to read a string then print the first letter of each word in that string

	Pleas Enter your string:
	Mohammad Ahmad Code 2002 Github
 
	First letters of this string:
	M
	A
	C
	2
	G

*/

#include <iostream>
#include <string>

using namespace std;

void PrintEveryFirstLatteer(string name) {

	for (int i = 0; i < name.length(); i++) {

		if (i == 0 && name[i] != ' ')
			cout << name[i] << endl;

		if (name[i] == ' ' && name[i+1] != ' ') {

			cout << name[i + 1] << endl;

		}
	}
}

int main()
{
	
	string name;

	cout << "what is the string: ";

	getline(cin, name);

	PrintEveryFirstLatteer(name);

	return 0;

}
