#include <iostream>
#include "Sphere.h"
using namespace std;

Sphere::Sphere(double r, double x, double y)
    :ThreeDimensionalShape(x, y)
{
    radius = (r > 0.0) ? r : 0.0;
}

double Sphere::getArea() const
{
    return 4.0 * 3.14 * radius * radius;
}

double Sphere::getVolume() const
{
    return (4.0 / 3.0) * 3.14 * radius * radius * radius;
}

double Sphere::getRadius() const
{
    return radius;
}

void Sphere::print() const
{
    cout << "Sphere with radius " << radius << " center at (" << xCenter << ", " << yCenter << ")";
}

