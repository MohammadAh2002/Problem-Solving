/*

    Part 1:
        Let’s try implementing a class using the basic framework. Consider a class to
        store the data for an automobile. We’ll have three pieces of data: a manufacturer
        name and model name, both strings, and a model year, an integer. Create a
        class with get/set methods for each data member. Make sure you make good
        decisions concerning details like member names. It’s not important that you
        follow my particular naming convention. What’s important is that you think
        about the choices you make and are consistent in your decisions.
    
    Part 2:
        For our automobile class from the previous exercise, add a support method
        that returns a complete description of the automobile object as a formatted
        string, such as, "1957 Chevrolet Impala". Add a second support method that
        returns the age of the automobile in years.

*/

#pragma warning(disable : 4996)

#include <iostream>
#include <string>

using namespace std;

class Automobile {

public:

    Automobile(string Model, string Manufacturer, int ModelYear) {

        this->_Model = Model;
        this->_Manufacturer = Manufacturer;
        this->_ModelYear = ModelYear;

    }

    void SetModel(string Model) { Model = _Model; }
    string Model() { return _Model; }

    void SetManufacturer(string Manufacturer) { _Manufacturer = Manufacturer; }
    string Manufacturer() { return _Manufacturer; }

    void SetModelYear(int ModelYear) { _ModelYear = ModelYear; }
    int ModelYear() { return _ModelYear; }

    string Description() {

        return to_string(_ModelYear) + " " + _Manufacturer + " " + _Model;

    }

    int Age() {

        time_t t = time(0);
        tm* now = localtime(&t);

        return now->tm_year + 1900 - _ModelYear;

    }

private:

    string _Model, _Manufacturer;
    int _ModelYear;

};

int main()
{

    Automobile Car("M5", "BMW", 2022);

    cout << "About the Car:";
    cout << "\nModel: " << Car.Model();
    cout << "\nManufacturer: " << Car.Manufacturer();
    cout << "\nModel Year: " << Car.ModelYear();

    cout << "\n\nCar Description: ";
    cout << Car.Description();

    cout << "\n\nCar Age: ";
    cout << Car.Age();

    return 0;
}
