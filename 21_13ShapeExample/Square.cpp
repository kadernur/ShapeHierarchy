#include "Square.h"
#include<iostream>

Square::Square(double e, double x, double y)
    :TwoDimensionalShape(x, y)
{
    edge = e;
}
double Square::getEdge() const
{
    return edge;
}
 double Square:: getArea() const
{
     return edge * edge;
}
 void Square::print() const
 {
     cout << "Square with edge " << edge << " center at (" << xCenter << ", " << yCenter << ")";
 }