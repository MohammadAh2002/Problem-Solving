/*
	
	 Write a program to Clients File and Show them on the Screen as follows.

										 Client List (5) Client(s).
	----------------------------------------------------------------------------------------------------
	 Account Number  | Pin Code  | Client Name              | Phone       | Balance
	 ----------------------------------------------------------------------------------------------------
	 A150            | 1234      | Mohammed Abu-Hadhoud     | 09389838	  | 9000
	 A151            | 1234      | Ali Maher                | 9349939     | 15000
	 A152            | 1234      | Fadi Jamil               | 9383838     | 1000
	 A153            | 1234      | Khalid Ibrahim           | 44435       | 400
	 A154            | 1234      | Mohsen Omar              | 55555       | 2000
	 ----------------------------------------------------------------------------------------------------

	 The Clients File Have the Data Like this:

	 a150#//#1234#//#mohammad#//#864354#//#400
	 b150#//#5678#//#ahmad#//#876453#//#500
	 c150#//#12356#//#soso#//#554965#//#800
	 d150#//#6543#//#lolo#//#876451#//#900
	 e150#//#9865#//#koko#//#86543#//#8000

*/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

const string ClientsFile = "ClintsFile";

struct StClientData {

	string AccountNumber, Name, PhoneNumber, PinCode;
	int AccountBalance;

};

void PrintTheHeder(vector <StClientData>& Vclients) {

	cout << "\t\t\t\tclients list (" << Vclients.size() << ") clients(s)\n";
	cout << "_______________________________________________________________________________________________\n";
	cout << setw(20) << left << "| account number";
	cout << setw(20) << left << "| pin code";
	cout << setw(20) << left << "| name";
	cout << setw(20) << left << "| phone";
	cout << setw(20) << left << "| balance" << endl;
	cout << "_______________________________________________________________________________________________\n";

}

void PrintClint(StClientData& c) {

	cout << "|" << setw(20) << left << c.AccountNumber;
	cout << "|" << setw(20) << left << c.PinCode;
	cout << "|" << setw(20) << left << c.Name;
	cout << "|" << setw(20) << left << c.PhoneNumber;
	cout << "|" << setw(20) << left << c.AccountBalance;
	cout << endl;


}

vector<string> PutStringToVector(string S1, string Delim)
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

StClientData PutStringToStruct(string S1, string sparator = "#//#") {

	StClientData Client;

	vector <string> vS1;

	vS1 = PutStringToVector(S1, sparator);

	Client.AccountNumber = vS1[0];
	Client.PinCode = vS1[1];
	Client.Name = vS1[2];
	Client.PhoneNumber = vS1[3];
	Client.AccountBalance = stoi(vS1[4]);

	return Client;
}

vector <StClientData> AddClientsToVector(string FileName) {

	vector <StClientData> Vclients;
	fstream MyFile;
	string line;
	StClientData StClients;

	MyFile.open(FileName, ios::in);

	if (MyFile.is_open()) {

		while (getline(MyFile, line)) {

			StClients = PutStringToStruct(line);

			Vclients.push_back(StClients);

		}

		MyFile.close();

	}

	return Vclients;

}

void PrintClients(string FileName) {

	vector <StClientData> Vclients = AddClientsToVector(FileName);

	PrintTheHeder(Vclients);

	for (StClientData& c : Vclients) {

		PrintClint(c);

	}
}

int main()
{

	PrintClients(ClientsFile);

	return 0;
}
