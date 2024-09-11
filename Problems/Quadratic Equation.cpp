/*

    Write a program to solve quadratic equations.
    - A quadratic equation is of the form:  ax2 + bx + c = 0
    - Use the quadratic formula.

*/

#include <iostream>
#include <math.h>
using namespace std;

float ReadNumbers(string massege) {

    float x;
    
    cout << massege;

    cin >> x;

    return x;
}

float CalculateQuadratic(float a, float b, float c) {

    float basecase = powf(b, 2) - (4 * a * c);

    if (basecase <= 0)
        return 0;

    return (-b + sqrtf(basecase)) / (2 * a);

}

float CalculateQuadraticWithMinos(float a, float b, float c) {

    float basecase = powf(b, 2) - (4 * a * c);

    if (basecase <= 0)
        return 0;

    return (-b - sqrtf(basecase)) / (2 * a);

}

void printresult(float result,int xnum) {

    if (result == 0)
        cout << "no solution\n" << endl;
    else
        printf("x%d is: %f\n", xnum, result);

}

int main()
{
    float a, b, c, result;

    a = ReadNumbers("what is a: ");
    b = ReadNumbers("what is b: ");
    c = ReadNumbers("what is c: ");
    
    result = CalculateQuadratic(a, b, c);
    printresult(result,1);

    result = CalculateQuadraticWithMinos(a, b, c);
    printresult(result,2);

    return 0;
}
