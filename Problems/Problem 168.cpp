/*

	Write a program to read a string TrimLeft, Right, All.

	String =      Mohammad Ahmad           

	Trim Left = Mohammad Ahmad
	Trim Right =       Mohammad Ahmad
	Trim = Mohammad Ahmad

*/

#include <iostream>
#include <string>

using namespace std;

string TrimRight(string S1){
		
	int i = S1.length() - 1;

	while (S1[i] == ' ') {

		if (S1[i] != ' ')
			return S1.substr(0, i + 1);

			i--;
	}

	return S1;

}

string TrimLeft(string S1) {

	for (int i = 0; i < S1.length(); i++) {

		if (S1[i] != ' ')
			return S1.substr(i, S1.length());
	}

	return "";

}

string Trim(string s) {

	return TrimLeft(TrimRight(s));
}

int main()
{
   
	string S1;

	cout << "what is your string:";
	getline(cin, S1);


	cout << "trim left: " << TrimLeft(S1) << endl;
	cout << "trim right: " << TrimRight(S1) << endl;
	cout << "trim: " << Trim(S1) << endl;


	return 0;

}
