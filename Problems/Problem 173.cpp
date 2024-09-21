/*

	Write a program to Convert line data to record and print it.

	Line Record is:
	A150#//#1234#//#Mohammad Ahmad#//#079999#//#5270.00000

	The following is the extracted client record:

	Account Number  : A150
	PinCode         : 1234
	Name            : Mohammad Ahmad
	Phone           : 079999
	Account Balance : 5270

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct StClientData {

	string AccountNumber, Name, PhoneNumber, PinCode;
	int  AccountBalance;

};

void PrintClientInfo(StClientData ClData) {

	cout << "account number: " << ClData.AccountNumber << endl;

	cout << "pincode: " << ClData.PinCode << endl;

	cout << "name: " << ClData.Name << endl;

	cout << "phone number: " << ClData.PhoneNumber << endl;

	cout << "account balance: " << ClData.AccountBalance << endl;
}

vector <string> PutStringToVector(string S1, string Delim) {
	
	vector<string> vString;
	short pos = 0;
	string sWord; // define a string variable 
	
	// use find() function to get the position of the delimiters 
	
	while ((pos = S1.find(Delim)) != std::string::npos){ 
		
		sWord = S1.substr(0, pos);
		// store the word
		if (sWord != ""){
			
			vString.push_back(sWord);   
		}

		S1.erase(0, pos + Delim.length());   
	
	}
	if (S1 != "") 
	{    
		vString.push_back(S1);
		// it adds last word of the string.  
	}
	return vString;
}

StClientData PutStringToStruct(string S1, string sparator = "#//#") {

	StClientData Client;

	vector <string> vS1;
	
	vS1 = PutStringToVector(S1,sparator);

	Client.AccountNumber = vS1[0];
	Client.PinCode = vS1[1];
	Client.Name = vS1[2];
	Client.PhoneNumber = vS1[3];
	Client.AccountBalance = stoi(vS1[4]);

	return Client;
}

int main()
{
	StClientData Client;
	string S1 = "a150#//#1234#//#mohammad ahmad#//#594561#//#500";

	cout << "line record is:\n" << S1 << endl;
	
	Client = PutStringToStruct(S1);

	PrintClientInfo(Client);

	return 0;
}
