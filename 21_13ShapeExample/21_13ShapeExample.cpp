#include <iostream>
#include <vector>
#include "Shape.h"
#include "TwoDimensionalShape.h"
#include "ThreeDimensionalShape.h"
#include "Circle.h"
#include "Sphere.h"
#include"Square.h"
#include"Triangle.h"
using namespace std;

int main()
{
    vector <Shape*> shapes(4);
    shapes[0] = new Circle(3.2, 5, 6);
    shapes[1] = new Sphere(4.1, 2, 3);
    shapes[2] = new Square(2.2, 1, 5);
    shapes[3] = new Triangle(1.1,3.1, 5, 2);


    for (int i = 0; i < 4; i++)
    {
        cout << *shapes[i] << endl;

        TwoDimensionalShape* twoDimensionalShapePtr =
            dynamic_cast <TwoDimensionalShape*>(shapes[i]);
        if (twoDimensionalShapePtr != 0)
            cout << "Area: " << twoDimensionalShapePtr->getArea() << endl;

        ThreeDimensionalShape* threeDimensionalShapePtr =
            dynamic_cast <ThreeDimensionalShape*>(shapes[i]);
        if (threeDimensionalShapePtr != 0)
            cout << "Area: " << threeDimensionalShapePtr->getArea()
            << "\nVolume: " << threeDimensionalShapePtr->getVolume() << endl;

        cout << endl;
    }
    return 0;
}
