/*

    Write a program to fill array with max size 100 with random numbers from 1 to 100,
    copy it to another array in reverse order and print it.

    Input:
    10

    Output:

    Array 1 elements:
    64 8 62 19 2 21 15 74 96 85

    Array 2 elements after copying array 1 in reversed order:
    85 96 74 15 21 2 19 62 8 64

*/

#include <iostream>
using namespace std;

void print_aray(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        cout << arr[i] << " ";
    }
    cout << endl;
}

void copy_array_in_revers(int arr1[], int arr2[], int arr1lenth) {

    for (int i = 0; i < arr1lenth; i++) {

        arr2[arr1lenth - i - 1] = arr1[i];

    }
}

int main()
{

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

    int arr2[10];

    copy_array_in_revers(arr, arr2, 10);

    cout << "array: ";
    print_aray(arr, 10);

    cout << "arra in revers: ";
    print_aray(arr2, 10);


}
