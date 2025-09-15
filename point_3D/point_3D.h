#pragma once
#include "iostream"

class point_3d {
	int _cord_x;
	int _cord_y;
	int _cord_z;
public:
	point_3d();
	point_3d(int, int, int);
	point_3d(const point_3d&);

	void set_CordX(int);
	void set_CordY(int);
	void set_CordZ(int);
	void set_Cords(int, int, int);

	int get_CordX();
	int get_CordY();
	int get_CordZ();

	int distance(const point_3d&);
	bool isEq(const point_3d&);

};