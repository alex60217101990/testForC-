#include "point2D.h"


point2D::point2D()
{
	x = 0;
	y = 0;
}

point2D::point2D(const point2D & a1)
{
	x = a1.getX();
	y = a1.getY();
}

point2D::point2D(int x, int y)
{
	this->setX(x); this->setY(y);
}

void point2D::setX(int x1)
{
	this->x = x1;
}

void point2D::setY(int y1)
{
	this->y = y1;
}

const int point2D::getX() const
{
	return x;
}

const int point2D::getY() const
{
	return y;
}

void point2D::print() const
{
	cout << endl << "X: " << x << "; " << "Y: " << y << "; " << endl;
}

bool point2D::operator==(point2D a1)
{
	try {
		return ((a1.getX() == this->x) && (a1.getY() == this->y)) ? true : false;
	}
	catch (...) {
		cout << "ERREOR1";
	}
}

bool point2D::operator!=(point2D a1)
{
	try {
		return !(*this == a1);
	}
	catch (...) {
		cout << "ERREOR2";
	}
}

point2D::~point2D()
{
}
