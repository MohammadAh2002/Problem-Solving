/*

    Write a Function take target number and return the Index for 2 numbers
    Their sum Equal to the target number.

*/

#include <iostream>

using namespace std;

void PrintTheIndexs(int arr[8], int target) {

    for (int i = 0; i < 8; i++) {
        for (int j = 1; j < 8; j++) {

            if (arr[i] + arr[j] == target) {
                printf("the index of the two numbers is: %d,%d\n", i, j);
            }
        }
    }
}

int main()
{
    
    int arr[8] = {1,5,9,7,3,4,1};
    int target = 10;

    PrintTheIndexs(arr, target);

    return 0;
}
