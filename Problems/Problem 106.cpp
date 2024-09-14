/*

    Write a program to fill array with max size 100 with random numbers from 1 to 100,
    copy it to another array using AddArrayElement, and print it.

    Input:
    10

    Output:

    Array 1 elements:
    1 47 51 18 85 62 51 61 82 4

    Array 2 elements after copy:
    1 47 51 18 85 62 51 61 82 4

    ----------------------
    the Function:

    void add_array_elemnts(int number, int arr[], int& arrlenth) {

    arr[arrlenth] = number;
    arrlenth++;

    }

*/

#include <iostream>
#include <cstdlib>

using namespace std;

int read_number(string massege) {

    cout << massege;

    int number;
    cin >> number;

    return number;

}

int RandomNumber(int From, int To) {

    int randNum = rand() % (To - From + 1) + From;
    return randNum;

}

void print_aray(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        cout << arr[i] << " ";
    }
    cout << endl;
}

void give_random_array_elemnts(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        arr[i] = RandomNumber(1, 100);
    }
}

void add_array_elemnts(int number,int arr[],int &arrlenth) {

    arr[arrlenth] = number;
    arrlenth++;

}

void copy_array(int arr1[],int arr2[], int arr1lenth, int &arr2lenth) {

    for (int i = 0; i < arr1lenth; i++) {

        add_array_elemnts(arr1[i], arr2, arr2lenth);

    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100], arr1lenth;
    arr1lenth = read_number("enter the array lenth: ");
    give_random_array_elemnts(arr1, arr1lenth);

    cout << "the lenth of the array 1 is: ";
    print_aray(arr1, arr1lenth);

    int arr2[100], arr2lenth=0;
    copy_array(arr1,arr2,arr1lenth,arr2lenth);

    cout << "the lenth of the array 2 is: ";
    print_aray(arr2, arr2lenth);

}