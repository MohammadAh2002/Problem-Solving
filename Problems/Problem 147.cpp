/*

	Write a program to read a string then Upper all letters , then Lower all letters and Print them.

	Pleas Enter your string:
	Mohammad Ahmad

	String after Upper:
	MOHAMMAD AHMAD

	String after Lower:
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

string printstrinupper(string S1) {

	for (int i = 0; i < S1.length(); i++) {

		S1[i] = toupper(S1[i]);

	}

	return S1;

}

string printstringlower(string S1) {

	for (int i = 0; i < S1.length(); i++) {

		S1[i] = tolower(S1[i]);

	}

	return S1;

}

int main()
{

	string s1;

	s1 = readstring();

	printstrinupper(s1);

	printstringlower(s1);


	return 0;

}
