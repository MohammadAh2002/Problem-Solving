/*

    Write a program to check it the matrix is Palindrome or not

    Matrix:
    1       2       1
    5       5       5
    7       3       7

    YES : Matrix is Palindrome

*/

#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillTheMatrix(int matrix[3][3], int rows, int colms) {


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {

            matrix[i][j] = RandomNumber(1, 100);

        }
    }
}

void PrintTheMatrix(int matrix[3][3], int rows, int colms) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {

            printf("%0*d    ", 2, matrix[i][j]);

        }

        cout << endl;

    }
}

bool CheckPalindromMatrix(int matrix[3][3], int rows, int colms) {

    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms/2; j++) {

            if (matrix[i][j] != matrix[i][colms - j - 1]){
                return false;
            }
        }
    }

    return true;

}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3];
    int mtx[3][3] = { {1,2,1},{5,5,5},{7,3,7} };

    FillTheMatrix(matrix, 3, 3);

    cout << "matrix:\n";
    PrintTheMatrix(matrix, 3, 3);

    if (CheckPalindromMatrix(mtx, 3, 3))
        cout << "yes its a palindrom matrix.\n";
    else
        cout << "no its not a palindrom matrix.\n";

    return 0;
}

