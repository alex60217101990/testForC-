#pragma once
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
class point2D
{
	int x;
	int y;
public:
	point2D();
	point2D(const point2D &a1);
	point2D(int x, int y);
	void setX(int x1);
	void setY(int y1);
	const int getX()const;
	const int getY()const;
	void print()const;
	bool operator==(point2D a1);
	bool operator!=(point2D a1);
	~point2D();
};

