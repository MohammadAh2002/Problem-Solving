/*

    Write a bool function that is passed an array and the number of elements in
    that array and determines whether the data in the array is sorted. This should
    require only one pass!

*/

#include <iostream>

using namespace std;

bool IsSorted(int TheArray[10], int Lenght) {

    int current = TheArray[0];
    for (int index = 1; index < Lenght; index++)
    {
        if (current > TheArray[index])
        {
            return false;
        }
        current = TheArray[index];
    }
    return true;

}

int main()
{

	int TheArray[10] = {1,2,3,4,5,6,7,8,9,10};

	if (IsSorted(TheArray, 10))
		cout << "Array Sorted :-)";
	else
		cout << "Array not Sorted :-(";

	return 0;
}
