/*

    Write a program to fill a 3*3 matrix with random numbers , then print Col sum

    The following is a 3x3 random matrix :
    68      59      72
    9      72      11
    53      47      72

    The following are the sum of each Col in the matrix :
    Col 1 Sum = 130
    Col 2 Sum = 178
    Col 3 Sum = 155

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

void PutTheSumInArray(int Arr[], int Sum, int index) {

    Arr[index] = Sum;

}

void GiveTheSumOfEchcolm(int matrix[3][3], int rows, int colms, int MateixArrSum[]) {

    for (int i = 0; i < colms; i++) {

        int sum = 0;

        for (int j = 0; j < rows; j++) {

            sum += matrix[j][i];

        }

        PutTheSumInArray(MateixArrSum, sum, i);

    }
}

void PrintArray(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        printf("\nrow %d sum = %d", i + 1, arr[i]);
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix[3][3], MatrixSumArr[3];

    FillTheMatrix(Matrix, 3, 3);

    cout << "a Matrix filled with random numbers from 1 to 100:\n";
    PrintTheMatrix(Matrix, 3, 3);

    GiveTheSumOfEchcolm(Matrix, 3, 3, MatrixSumArr);

    cout << '\n';

    cout << "the sum of each col is in Array:";
    PrintArray(MatrixSumArr, 3);


    return 0;

}
