#pragma once
#include "point.h"
class Circle {
	Point _cent;
	int _rad;

public:
	Circle();
	Circle(int);
	Circle(int, int, int);
	Circle(int, Point&);
	Circle(const Circle&);

	void set_CordsCentre(int, int);
	void set_rad(int);
	bool isEq(const Circle&);
	int distanceCent(const Circle&);

	Point get_Cent();
	int get_CentX();
	int get_CentY();
	int get_rad();

};