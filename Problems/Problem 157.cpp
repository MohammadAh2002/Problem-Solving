/*

	Write a program to read a string then Count Each Word in that String.

	Pleas Enter your string:
	Mohammad Ahmad 2002 Github Programming

	The number of words in your string is:
	5

*/

#include <string>
#include <iostream>

using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String:";
	getline(cin, S1);
	return S1;
}

short CountWords(string S1)
{
	string Sprator = " "; 
	short Counter = 0;
	short pos;
	string sWord; 
	
	while ((pos = S1.find(Sprator)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); 
		
		if (sWord != "")
			Counter++;
		
		S1.erase(0, pos + Sprator.length());
	}

	if (S1 != "")
		Counter++; 
	
	
	return Counter;
}

int main()
{
	string S1 = ReadString();

	cout << "\nThe number of words in your string is: ";
	cout << CountWords(S1);

}
