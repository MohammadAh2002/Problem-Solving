/*

    Write a program to check if the matrix is identity or not

    Matrix:
    1       0       0
    0       1       0
    0       0       1

    YES: Matrix is Identity

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

            matrix[i][j] = RandomNumber(1, 10);

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

bool CheckIfIdentityMatrix(int matrix[3][3], int rows, int colms) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {

            if (i == j && matrix[i][j] != 1) {
            
                    return false;
                
            }
            else if (i != j && matrix[i][j] != 0) {

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

    int mtx[3][3] = { {1,0,0},{0,1,0},{0,0,1} };

    FillTheMatrix(matrix, 3, 3);

    cout << "matrix:\n";
    PrintTheMatrix(matrix, 3, 3);

    if (CheckIfIdentityMatrix(matrix, 3, 3))
        cout << "the matrix is identity\n";
    else
        cout << "the matrix is not identity\n";

    cout << endl;

    return 0;
}

