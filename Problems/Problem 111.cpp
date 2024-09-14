/*

    Write a program to fill array with ordered numbers from 1 to N, then print it,
    after that shuffle this array and print it after shuffle.

    Input:
    10

    Output:

    Array elements before shuffle:
    1 2 3 4 5 6 7 8 9 10

    Array elements after shuffle:
    2 4 6 3 10 1 7 8 5 9

*/

#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To) {

    int randNum = rand() % (To - From + 1) + From;
    return randNum;

}

void swap(int& a, int& b) {

    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}

void shuflle_array_elemnts(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        swap(arr[RandomNumber(1, arrlenth) - 1],
            arr[RandomNumber(1, arrlenth) - 1]);
    }
}

void print_aray(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        cout << arr[i] << " ";
    }
    cout << endl;
}


int main()
{
    srand((unsigned)time(NULL));

	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int arrlenth = 10;

    cout << "array elemnts before swap: ";
    print_aray(arr, arrlenth);

    shuflle_array_elemnts(arr, arrlenth);

    cout << "array elemnts after swap: ";
    print_aray(arr, arrlenth);

}
