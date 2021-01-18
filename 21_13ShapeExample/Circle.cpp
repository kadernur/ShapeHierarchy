#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle(double r, double x, double y)
    :TwoDimensionalShape(x, y)
{
    radius = (r > 0.0) ? r : 0.0;
}

double Circle::getRadius() const
{
    return radius;
}

double Circle::getArea() const
{
    return 3.14 * radius * radius;
}

void Circle::print() const
{
    cout << "Circle with radius " << radius << " center at (" << xCenter << ", " << yCenter << ")";
}

