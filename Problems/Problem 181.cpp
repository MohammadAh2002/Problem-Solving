/*

	Write a program to Find clint by Account Number and print it to the screen.

	Please enter AccountNumber:
	B33

	Client with Account Number (B33) NOT Found !

	Please enter AccountNumber:
	A150

	client record:
	ccount Number   : A150
	PinCode         : 1234
	Name            : Mohammad Ahmad
	Phone           : 09389838
	Account Balance : 9000

	--------------------------------------------------------------
	Clients Saved in File Like This:
	a150#//#1234#//#mohammad#//#87313#//#400
	b150#//#9876#//#ahmad#//#456435798#//#500
	c150#//#5913#//#koko#//#456478435#//#900

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

void PrintClientDetals(StClientData& c) {

	cout << "account number: " << c.AccountNumber << endl;
	cout << "pin code: " << c.PinCode << endl;
	cout << "name: " << c.Name << endl;
	cout << "phone number: " << c.PhoneNumber << endl;
	cout << "account balance: " << c.AccountBalance << endl;
	cout << endl;


}

string ReadAccountNumber() {

	string AcoountNumberSearch;

	cout << "what is the number of the account:";
	getline(cin >> ws, AcoountNumberSearch);

	return AcoountNumberSearch;

}

bool CheckClints(string AcoountNumberSearch, StClientData& Clients) {

	vector <StClientData> Vclients = AddClientsToVector(ClientsFile);

	for (StClientData c : Vclients) {

		if (AcoountNumberSearch == c.AccountNumber) {
			Clients = c;
			return true;
		}
	}

	return false;

}

void FindClient(string FileName) {

	string AcoountNumberSearch;
	StClientData StClients;

	AcoountNumberSearch = ReadAccountNumber();

	if (CheckClints(AcoountNumberSearch, StClients)) {

		cout << "client datels is:\n";

		PrintClientDetals(StClients);

	}
	else {

		cout << "client not found!\n";
	}
}

int main()
{

	FindClient(ClientsFile);

	return 0;
}
