#include "TwoDimensionalShape.h"
class Triangle : public TwoDimensionalShape
{
public:
	Triangle(double = 0.0, double = 0.0, double = 0.0,double=0.0);
	double getyukseklik() const;
	double getTabanAlani() const;
	virtual  double getArea() const;
	void print ()const;

private:
	double yukseklik; 
	double tabanAlani;
};

