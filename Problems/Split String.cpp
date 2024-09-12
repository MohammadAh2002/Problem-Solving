/*

	Split String.

*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector <string> Split(string str, string Sparetor = " ") {

	vector <string> vString;
	short Postion;
	string word;

	while ((Postion = str.find(Sparetor)) != string::npos) {

		word = str.substr(0, Postion);

		if (word != "") {

			vString.push_back(word);

		}

		str.erase(0, Postion + Sparetor.length());;

	}

	if (str != "")
		vString.push_back(str);

	return vString;

}

int main()
{

	vector <string> S = Split("mohammad ahmad 2002 LEX");

	for (string& s : S)
		cout << s << endl;

	return 0;

}
