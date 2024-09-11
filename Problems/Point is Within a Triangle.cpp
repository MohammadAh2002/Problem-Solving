/*
    determining if a test point lies within a triangle

   1. Calculate the area of the entire triangle.
   2. Calculate the area of the three smaller triangles formed by the test point
      and each pair of adjacent vertices of the triangle. 
   3. If the sum of the areas of the three smaller triangles is equal to the area
      of the entire triangle, the test point lies within the triangle

*/

#include <iostream>

using namespace std;

struct Point {

    int x, y;

};

double triangleArea(int x1, int y1, int x2, int y2, int x3, int y3) {
    return 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

bool withinTriangle(Point p1, Point p2, Point p3, Point testPoint){
   
    double totalArea = triangleArea(p1.x, p1.y, p2.x, p2.x, p3.x, p3.y);
    double area1 = triangleArea(testPoint.x, testPoint.y, p2.x, p2.x, p3.x, p3.y);
    double area2 = triangleArea(p1.x, p1.y, testPoint.x, testPoint.y, p3.x, p3.y);
    double area3 = triangleArea(p1.x, p1.y, p2.x, p2.y, testPoint.x, testPoint.y);

    return totalArea == (area1 + area2 + area3);

}

int main()
{
    
     Point p1{ 1, 4 }, p2{ 5, 6 }, p3{ 6, 1 }, TestPoint{ 4, 5 };

    //Point p1{ -6, 2 }, p2{ -2, -2 }, p3{ 8, 4 }, TestPoint{ 4, 2 };
    
    if (withinTriangle(p1,p2,p3, TestPoint))
        cout << "The Point Is Within The Triangle";
    else
        cout << "The Point Is not Within The Triangle";

    return 0;
}
