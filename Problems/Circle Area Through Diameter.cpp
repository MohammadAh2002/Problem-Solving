/*

    Write a program to calculate circle area through diameter, then print it on the screen.
    - Area = (PI * D^2) / 4
    - PI = 3.14

    The user should enter:
    D
    
    Example Inputs:
    10

    Outputs:
    78.54

*/

#include <iostream>
using namespace std;

int read_d() {

    int d;
    cout << "what is d: ";
    cin >> d;

    return d;
}
float calculta_area(int d) {

    float area = (3.14 * pow(d, 2)) / 4;
    return area;
}
void print_area(float area) {

    cout << "the rea of the circle is: " << area << endl;

}
int main()
{
    
    print_area(calculta_area(read_d()));


}
