/*

    Write a Program to Find the biggest Value in Array.

*/

#include <iostream>
using namespace std;

int check_biggest_in_array(int arr[3]) {

    int biggest_vlaue = arr[0];

    for (int i = 0; i < 3; i++) {

        if (arr[i] >= biggest_vlaue)
            biggest_vlaue = arr[i];
    }

    return biggest_vlaue;
}

int main()
{
    
    int arr[] = {1,9,7};

    cout << "the biggest value in the array is: " << check_biggest_in_array(arr) << endl;
}
