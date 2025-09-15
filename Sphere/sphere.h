#pragma once
#include "iostream"
#include "point_3d.h"



class sphere {
	int _rad;
	point_3d _cent;
public:
	sphere();
	sphere(int);
	sphere(int, int, int, int);
	sphere(int, point_3d&);
	sphere(const sphere&);

	void set_CordsCentre(int, int, int);
	void set_rad(int);
	bool isEq(const sphere&);
	int distanceCent(const sphere&);

	point_3d get_Cent();
	int get_CentX();
	int get_CentY();
	int get_CentZ();
	int get_rad();
};