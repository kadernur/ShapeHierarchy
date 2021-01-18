#include "Triangle.h"

#include<iostream>

Triangle::Triangle(double h,double t, double x, double y)
	:TwoDimensionalShape(x, y)
{
	yukseklik = (h> 0.0) ? h : 0.0;
	tabanAlani = t;
}
double  Triangle::getyukseklik() const
{
	return yukseklik;
}
double Triangle:: getTabanAlani() const
{
	return tabanAlani;
}
double Triangle::getArea() const
{
	return (tabanAlani * yukseklik) / 2;
  
}
void Triangle::print()const
{
	cout << "Triangle with h and edge of sill" << yukseklik<<" " <<tabanAlani << " center at (" << xCenter << ", " << yCenter << ")";
}

