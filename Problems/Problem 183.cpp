/*

	Write a program to:                  
	- Read Date String.             
	- Convert it to date structure.                
	- Print Day, Month, Year separately.
	- Then convert Date Structure to string and print it on the screen.

	Note: Write the following functions:
	- Function: StringToDate.       
	- Function: DateToString.

*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct sDate {

	int Day, Month, Year;

};

sDate ReadDate() {

	sDate Date;

	cout << "enter a day: ";
	cin >> Date.Day;

	cout << "enter a month: ";
	cin >> Date.Month;

	cout << "enter a year: ";
	cin >> Date.Year;

	return Date;

}

vector<string> SplitString(string S1, string Delim)
{
	vector<string> vString;
	short pos = 0;
	string sWord; // define a string variable
	// use find() function to get the position of the delimiters
	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (S1 != "")
	{
		vString.push_back(S1); // it adds last word of the string.
	}
	return vString;
}

sDate DateFromStringToDate(string stringDate) {

	sDate sDate;

	vector<string> V = SplitString(stringDate,"/");;

	V = SplitString(stringDate, "/");

	sDate.Day = stoi(V[0]);
	sDate.Month = stoi(V[1]);
	sDate.Year = stoi(V[2]);

	return sDate;



}

string DateFromDateToString(sDate Date) {

	return to_string(Date.Day) + "/" + to_string(Date.Month) +
	   	   "/" + to_string(Date.Year);

}

int main()
{
   
	string DateString;
	sDate Date;

	cout << "Please Enter Date dd/mm/yyyy: ";
	cin >> DateString;

	Date = DateFromStringToDate(DateString);

	cout << "\nday: " << Date.Day << endl;
	cout << "month: " << Date.Month << endl;
	cout << "year: " << Date.Year << endl;

	cout << "\nyou enterd: " << DateFromDateToString(Date) << endl;

	return 0;

}
