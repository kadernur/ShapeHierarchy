#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include "TwoDimensionalShape.h"

class Circle : public TwoDimensionalShape
{
public:
    Circle(double = 0.0, double = 0.0, double = 0.0);
    double getRadius() const;
    virtual double getArea() const;
    void print() const;
private:
    double radius;
};

#endif // CIRCLE_H


