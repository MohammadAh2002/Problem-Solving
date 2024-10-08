/*

    Build a Simple Person Class.

    Build a Simple Employee Class inherit the Person Class.

    Build a Simple Developer Class inherit the Employee Class.

*/

#include <iostream>

using namespace std;

class clsPerson {

private:

    string _FirstName, _LastName, _PhoneNumber, _Email;
    short _ID;

public:

    clsPerson(short ID, string FirstName, string LastName, string Email, string PhoneNumber) {

        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _PhoneNumber = PhoneNumber;
    }

    short GetID() {

        return _ID;

    }

    void SetFirstName(string FirstName) {

        _FirstName = FirstName;

    }
    string GetFirstName() {

        return _FirstName;

    }

    void SetLastName(string LastName) {

        _LastName = LastName;

    }
    string GetLastName() {

        return _LastName;

    }

    void SetEmail(string Email) {

        _Email = Email;

    }
    string GetEmail() {

        return _Email;

    }
    
    void SetPhoneNumber(string PhoneNumber) {

        _PhoneNumber = PhoneNumber;

    }
    string GetPhoneNumber() {

        return _PhoneNumber;

    }

    string GetFullName() {

       return _FirstName + " " + _LastName;

    }

    void PrintInfo() {

        cout << "Info:\n";
        cout << "______________________\n";
        cout << "ID       : " << _ID << endl;
        cout << "FirstName: " << _FirstName << endl;
        cout << "LastName : " << _LastName << endl;
        cout << "Full Name: " << GetFullName() << endl;
        cout << "Email    : " << _Email << endl;
        cout << "Phone    : " << _PhoneNumber << endl;
        cout << "______________________\n";

    }

    void SendEmail(string Subject, string Body) {

        cout << "\nthe following massege sent successfully to email: " << _Email << endl;
        cout << "subject: " << Subject << endl;
        cout << "Body: " << Body << endl;

    }

    void SendSMS(string Message) {

        cout << "\nthe following massege sent successfully to Phone Number: " << _PhoneNumber << endl;
        cout << Message << endl;

    }

};

class clsEmployee : public clsPerson {

private:

    string _Title, _Department;
    int _Salary;

public:

    clsEmployee(short ID, string FirstName, string LastName, string Email, string PhoneNumber,
                 string Title,string Department, int Salary)
                 : clsPerson(ID,FirstName,LastName,Email,PhoneNumber) {

        _Title = Title;
        _Department = Department;
        _Salary = Salary;

    }


    void SetTitle(string Title) {

        _Title = Title;

    }
    string GetTitle() {

        return _Title;

    }

    void SetDepartment(string Department) {

        _Department = Department;

    }
    string GetDepartment() {

        return _Department;

    }

    void SetSalary(int Salary) {

        _Salary = Salary;

    }
    int GetSalary() {

        return _Salary;

    }

    void PrintInfo() {

        cout << "Info:\n";
        cout << "_______________________________\n";
        cout << "ID                     : " << GetID() << endl;
        cout << "FirstName              : " << GetFirstName() << endl;
        cout << "LastName               : " << GetLastName() << endl;
        cout << "Full Name              : " << GetFullName() << endl;
        cout << "Email                  : " << GetEmail() << endl;
        cout << "Phone                  : " << GetPhoneNumber() << endl;
        cout << "Title                  : " << GetTitle() << endl;
        cout << "Department             : " << GetDepartment() << endl;
        cout << "Salary                 : " << GetSalary() << endl;
        cout << "_______________________________\n";

    }

};

class clsDeveloper : public clsEmployee {

private:

    string _MainProgrammingLanguage;

public:

    clsDeveloper(short ID, string FirstName, string LastName, string Email, string PhoneNumber,
        string Title, string Department, int Salary, string MainProgrammingLanguage)
        : clsEmployee(ID,FirstName,LastName,Email,PhoneNumber,Title,Department,Salary) {

        _MainProgrammingLanguage = MainProgrammingLanguage;

    }


    void SetMainProgrammingLanguage(string MainProgrammingLanguage) {

        _MainProgrammingLanguage = MainProgrammingLanguage;

    }
    string GetMainProgrammingLanguage() {

        return _MainProgrammingLanguage;

    }

    void PrintInfo() {

        cout << "Info:\n";
        cout << "_______________________________\n";
        cout << "ID                     : " << GetID() << endl;
        cout << "FirstName              : " << GetFirstName() << endl;
        cout << "LastName               : " << GetLastName() << endl;
        cout << "Full Name              : " << GetFullName() << endl;
        cout << "Email                  : " << GetEmail() << endl;
        cout << "Phone                  : " << GetPhoneNumber() << endl;
        cout << "Title                  : " << GetTitle() << endl;
        cout << "Department             : " << GetDepartment() << endl;
        cout << "Salary                 : " << GetSalary() << endl;
        cout << "MainProgrammingLanguage: " << GetMainProgrammingLanguage() << endl;
        cout << "_______________________________\n";

    }

};

int main()
{
    
    clsDeveloper Developer1(10,"mohammad","ahmad","lexmohammad2002@gmail.com","0543812415","ceo","AI",30000,"c++");

    Developer1.PrintInfo();

    return 0;
}
