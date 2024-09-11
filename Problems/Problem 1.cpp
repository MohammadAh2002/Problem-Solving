/*

    Rewrite the code that finds the agent with the best monthly sales average so
    that it finds the agent with the highest median sales. As stated earlier, the median
    of a set of values is the “one in the middle,” such that half of the other values
    are higher and half of the other values are lower. If there is an even number
    of values, the median is the simple average of the two values in the middle.
    For example, in the set 10, 6, 2, 14, 7, 9, the values in the middle are 7 and 9.
    The average of 7 and 9 is 8, so 8 is the median

*/

#include <iostream>

using namespace std;

const int AgentsNumber = 3;
const int MonthsNumber = 12;

int HighestSales(int Sales[AgentsNumber][MonthsNumber]) {

    int HighestSales = Sales[0][0];

    for (int AgentNumber = 0; AgentNumber < AgentsNumber; AgentNumber++) {

        for (int MonthNumber = 0; MonthNumber < MonthsNumber; MonthNumber++) {

            if (HighestSales < Sales[AgentNumber][MonthNumber])
                HighestSales = Sales[AgentNumber][MonthNumber];

        }
    }
    return HighestSales;
}

double CalculateArrayAverage(int TheArray[], int Length) {

    double Sum = 0;

    for (int Index = 0; Index < Length; Index++) {

        Sum += TheArray[Index];

    }

    return (Sum / Length);

}

double HighestMonthAverage(int Sales[AgentsNumber][MonthsNumber]) {


    double HighestAverage = CalculateArrayAverage(Sales[0], MonthsNumber);

    for (int AgentNumber = 1; AgentNumber < AgentsNumber; AgentNumber++) {

        int AgentAverage = CalculateArrayAverage(Sales[AgentNumber], MonthsNumber);

        if (HighestAverage < AgentAverage)
            HighestAverage = AgentAverage;
    }

    return HighestAverage;

}

double CalculateMedian(int TheArray[], int Length) {

    if (Length % 2 == 0)
        return ((TheArray[Length / 2] + TheArray[Length / 2 + 1]) / 2);

    else
        return TheArray[Length / 2];
}

double HighestMedianSales(int Sales[AgentsNumber][MonthsNumber]) {

    double HighestMedian = CalculateMedian(Sales[0], MonthsNumber);

    for (int Index = 0; Index < AgentsNumber; Index++) {

        double Median = CalculateMedian(Sales[Index], MonthsNumber);

        if (HighestMedian < Median)
            HighestMedian = Median;
    }

    return HighestMedian;

}

int main()
{

    int Sales[AgentsNumber][MonthsNumber] = {
       {1856, 498, 30924, 87478, 328, 2653, 387, 3754, 387587, 2873, 276, 32},
       {5865, 5456, 3983, 6464, 9957, 4785, 3875, 3838, 4959, 1122, 7766, 2534},
       {23, 55, 67, 99, 265, 376, 232, 223, 4546, 564, 4544, 3434}
    };

    cout << "Highest Sales is: " << HighestSales(Sales);

    cout << "\nHighest Month Average is: " << HighestMonthAverage(Sales);

    cout << "\nHighest Median is: " << HighestMedianSales(Sales);

    return 0;
}
