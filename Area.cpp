#include <iostream>
using namespace std;

// Area of Triangle
float area(float b, float h)
{
    return (b * h) / 2;
}

// Area of Circle
float area(float r)
{
    return 3.14 * r * r;
}

int main()
{
    float b, h, r;

    cout << "Enter base and height of triangle: ";
    cin >> b >> h;
    cout << "Area of triangle = " << area(b, h) << endl;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of circle = " << area(r) << endl;

    return 0;
}