#include"TwoDimensionalShape.h"
class Square :public TwoDimensionalShape

{
public:
	Square(double = 0.0,double=0.0,double=0.0);
	double getEdge() const;
	virtual double getArea() const;
	void print() const;


private:
	double edge;
};

