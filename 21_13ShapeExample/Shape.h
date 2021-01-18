#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;

class Shape
{
    friend ostream& operator<<(ostream&, Shape&);
public:
    Shape(double = 0.0, double = 0.0);
    double getCenterX() const;
    double getCenterY() const;
    virtual void print() const = 0;

protected:
    double xCenter;
    double yCenter;
};

#endif // SHAPE_H

