/*

    Write a program to fill array with numbers, then check if it is Palindrome array or not,
    Note: Palindrome array can be read the same from right to left and from left to right.

    Input:
    10 20 30 30 20 10

    Output:
    Array Elements:
    10 20 30 30 20 10
    Yes array is Palindrome

*/

#include <iostream>
using namespace std;

void add_array_elemnts(int number, int arr[], int& arrlenth) {

    arr[arrlenth] = number;
    arrlenth++;

}

void copy_array(int arr1[], int arr2[], int arr1lenth, int& arr2lenth) {

    for (int i = 0; i < arr1lenth; i++) {

        add_array_elemnts(arr1[i], arr2, arr2lenth);

    }
}

bool balindor_array(int arr[], int arr2[], int arrlenth, int arr2lenth) {

    for (int i = 0; i < arrlenth; i++) {

        if (arr[i] == arr2[arr2lenth - i - 1])
            continue;
        else
            return false;
    }

    return true;

}


int main()
{
    
    int arr[6] = {10,20,30,30,20,10};

    int arr2[100], arr2lenth=0;

    copy_array(arr, arr2, 6, arr2lenth);

    if (balindor_array(arr, arr2, 6, arr2lenth))
        cout << "this is a balindor array\n";
    else
        cout << "this is not a palindor array\n";

}
