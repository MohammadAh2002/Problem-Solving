/*

    Build a Simple Calculator Class to do the Basic Operations.

    Methods:
    - Add
    - Subtract
    - Divide 
    - Multiply 
    - CnacelLastOperation
    - PrintResult
    - Clear

*/

#include <iostream>

using namespace std;

class clsCalculator {

private:

    int _Result = 0, _PreviosResult = 0, _LastNumber = 0;
    string _Opration = "clear";

    bool IsZero(int num) {

        return num == 0;

    }

public:

    void Add(int num){
    
        _LastNumber = num;
        _PreviosResult = _Result;
        _Opration = "Adding";
        _Result += num;
    
    }

    void Subtract(int num) {

        _LastNumber = num;
        _PreviosResult = _Result;
        _Opration = "subtracting";
        _Result -= num;

    }

    void Divide(int num) {

        if (IsZero(num))
            num = 1;

        _LastNumber = num;
        _PreviosResult = _Result;
        _Opration = "Dividing";
        _Result /= num;

    }

    void Multiply(int num) {

        _LastNumber = num;
        _PreviosResult = _Result;
        _Opration = "Multplying";
        _Result *= num;

    }

    void CnacelLastOperation() {

        _Result = _PreviosResult;

        _Opration = "Cnacel Last Operation";
    }

    void PrintResult() {

        if (_Opration == "clear")
            cout << "Result After Clear is: " << _Result << endl;
        else if (_Opration == "Cnacel Last Operation")
            cout << "Result After Cnaceling Last Operation is: " << _Result << endl;
        else
            cout << "Result After " << _Opration << " " << _LastNumber << " is: " << _Result << endl;

    }

    void Clear() {

        _Result = 0;
        _PreviosResult = 0;
        _LastNumber = 0;
        _Opration = "clear";

    }

};

int main()
{
    
    clsCalculator clsCalculator;

    clsCalculator.Add(5);
    clsCalculator.PrintResult();

    clsCalculator.Subtract(3);
    clsCalculator.PrintResult();

    clsCalculator.Multiply(5);
    clsCalculator.PrintResult();

    clsCalculator.Divide(0);
    clsCalculator.PrintResult();

    clsCalculator.Add(10);
    clsCalculator.PrintResult();

    clsCalculator.CnacelLastOperation();
    clsCalculator.PrintResult();

    clsCalculator.Clear();
    clsCalculator.PrintResult();

    return 0;
}
