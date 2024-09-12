/*

	Reverse a Wrods of Vector.

*/

#include <iostream>
#include <vector>

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

		str.erase(0, Postion + Sparetor.length());

	}

	if (str != "")
		vString.push_back(str);

	return vString;

}

void ReversWords( string& str, string Sparetor = " ") {

	vector <string> v = Split(str);

	string *str2 = new string;

	for(int i = v.size()-1; i >=0;i--){
		
		*str2 += v[i] + Sparetor;
	
	}

	str = *str2;

	delete str2;
}


int main()
{
   
	string strm = "mohammad ahmad 2022";

	ReversWords(strm);

	cout << strm << endl;

	return 0;
}
