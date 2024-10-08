/*

    Build a Simple Person Class and a Nested Class Inside it Called Address.

*/

#include<iostream>
using namespace std;

class clsPerson {

    class clsAddress
    {

    private:
        string _AddressLine1;
        string _AddressLine2;
        string _City;
        string _Country;

    public:

        clsAddress(string AddressLine1, string AddressLine2, string City, string Country) {

            _AddressLine1 = AddressLine1;
            _AddressLine2 = AddressLine2;
            _City = City;
            _Country = Country;

        }

        void Print()
        {
            cout << "\nAddress:\n";
            cout << _AddressLine1 << endl;
            cout << _AddressLine2 << endl;
            cout << _City << endl;
            cout << _Country << endl;
        }

    };

public:

    string _FullName;
    clsAddress Address;

    clsPerson(string FullName, string AddressLine1, string AddressLine2, string City, string Country)
              : Address(AddressLine1, AddressLine2, City, Country)
    {
        _FullName = FullName;
    }

};

int main()
{

    clsPerson Person("Mohammad Ahmad","al maqdsy","fff","jersulem","plaestine");

    cout << Person._FullName << endl;
    Person.Address.Print();

    system("pause>0");

    return 0;

}