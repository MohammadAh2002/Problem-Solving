/*

    Write a program to fill a 3*3 matrix with random numbers , then print row sum

    The following is a 3x3 random matrix :
    37      83      19
    26      61      66
    16      60      65

    The following are the sum of each row in the matrix :
    Row 1 Sum = 139
    Row 2 Sum = 153
    Row 3 Sum = 14

*/

#include <iostream>
#include<iomanip>

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

            cout << setw(3) << matrix[i][j] << " ";

        }
        cout << endl;
    }
}

void GiveTheSumOfEchRow(int matrix[3][3], int rows, int colms) {

   

    for (int i = 0; i < colms; i++) {

        int sum = 0;

        for (int j = 0; j < rows; j++) {

            sum += matrix[i][j];

        }

        printf("\nrow %d sum = %d", i + 1, sum);

    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3];

    FillTheMatrix(Matrix, 3, 3);

    cout << "a Matrix filled with random numbers from 1 to 100:\n";
    PrintTheMatrix(Matrix, 3, 3);

    cout << '\n';

    cout << "the sum of each row is:";
    GiveTheSumOfEchRow(Matrix, 3, 3);

    return 0;

}
