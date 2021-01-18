#ifndef TWODIMENSIONALSHAPE_H
#define TWODIMENSIONALSHAPE_H
#include "Shape.h"

class TwoDimensionalShape : public Shape
{
public:
    TwoDimensionalShape(double x, double y) : Shape(x, y) {}
    virtual double getArea() const = 0;
};

#endif // TWODIMENSIONALSHAPE_H

