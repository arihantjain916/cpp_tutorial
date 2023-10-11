#include <iostream>
using namespace std;

double calculatedArea(float radius, float pi)
{
    return pi * radius * radius;
}
int main()
{
    double radius = 0, area = 0;
    const double pi = 3.14;

    cout << "Enter the radius of the circle: " << endl;
    cin >> radius;

    area = calculatedArea(radius,pi);

    cout << "The area of radius is: " << area << endl;

    return 0;
}