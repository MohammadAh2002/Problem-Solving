/*

	Write a program to Update clint by Account Number.

	Please enter AccountNumber:
	B33

	Client with Account Number (B33) NOT Found !

	Please enter AccountNumber:
	A150

	The following are the client Data:
	Account Number  : A150
	PinCode         : 1234
	Name            : Mohammad Ahmad
	Phone           : 09389838
	Account Balance : 9000

	Are you sure you want Update client? (1)yes(0)no? y
	Enter PinCode: 4444
	Enter Name: Omar Hamed
	Enter Phone: 8177172
	Enter Account Balance: 4000

	Client Updates Successfully

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

const string ClientsFile = "ClintsInfoFile.text";

struct StClientData {

	string AccountNumber, Name, PhoneNumber, PinCode;
	int AccountBalance;
	bool Update = false;

};

string AddClientDataInLine(StClientData ClData, string Sparater = "#//#") {

	string word;

	word += ClData.AccountNumber + Sparater;
	word += ClData.PinCode + Sparater;
	word += ClData.Name + Sparater;
	word += ClData.PhoneNumber + Sparater;
	word += to_string(ClData.AccountBalance);

	return word;

}

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

void PrintClints(StClientData& c) {

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

		PrintClints(c);

	}
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

bool FindClient(string FileName, string AccountNum) {

	StClientData StClients;

	if (CheckClints(AccountNum, StClients)) {

		cout << "client datels is:\n";

		PrintClientDetals(StClients);
		return true;
	}
	else {

		cout << "client not found!\n";
		return false;
	}
}

void FillNewFile(string FileName, vector <StClientData>& V1) {

	string Line;
	fstream MyFile;

	MyFile.open(FileName, ios::out);

	if (MyFile.is_open()) {

		for (StClientData c : V1) {

			Line = AddClientDataInLine(c);
			MyFile << Line << endl;
		}

		MyFile.close();
	}

}

bool WantToUpdate() {

	bool Update;

	cout << "are you sure you want to update(1)yes(0)no?\n";
	cin >> Update;

	return Update;

}

void MarkClientToUpdate(vector <StClientData>& V1, string AccountNum) {


	for (StClientData& c : V1) {

		if (c.AccountNumber == AccountNum)
			c.Update = true;

	}

}

void ReadUpdatedClientData(StClientData& ClData, string accountnum) {

	ClData.AccountNumber = accountnum;

	cout << "what is the new pin pincode: ";
	getline(cin >> ws, ClData.PinCode);

	cout << "what is the new name: ";
	getline(cin, ClData.Name);

	cout << "what is the new phone number: ";
	getline(cin, ClData.PhoneNumber);

	cout << "what is the new account balance: ";
	cin >> ClData.AccountBalance;

	ClData.Update = false;

}

vector <StClientData> UpdateVector(vector <StClientData>& V1, string Accountnum) {

	vector <StClientData> V2;

	for (StClientData& c : V1) {

		if (c.Update) {

		    ReadUpdatedClientData(c, Accountnum);
			V2.push_back(c);
			continue;
		}
		else {
			V2.push_back(c);
		}
	}

	return V2;

}

void UpdateClient(string FileName) {


	string AccountNum = ReadAccountNumber();
	vector <StClientData> V1;
	string Line;
	fstream MyFile;
	StClientData Client;

	if (FindClient(FileName, AccountNum)) {

		if (WantToUpdate()) {

			V1 = AddClientsToVector(FileName);

			MarkClientToUpdate(V1, AccountNum);

			V1 = UpdateVector(V1, AccountNum);

			FillNewFile(FileName, V1);

			cout << "Clint Updated succfuly.\n";
		}
		else {

			cout << "ok as you want\n";

		}
	}
}

int main()
{

	PrintClients(ClientsFile);
	UpdateClient(ClientsFile);
	PrintClients(ClientsFile);

	return 0;
}
