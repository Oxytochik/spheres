#include "point_3d.h"
#include "cmath"
point_3d::point_3d() : _cord_x(0), _cord_y(0), _cord_z(0) {}
point_3d::point_3d(int x, int y, int z) : _cord_x(x), _cord_y(y), _cord_z(z) {}
point_3d::point_3d(const point_3d& other) : _cord_x(other._cord_x), _cord_y(other._cord_y), _cord_z(other._cord_z) {}

void point_3d::set_CordX(int x) {
	_cord_x = x;
}

void point_3d::set_CordY(int y) {
	_cord_y = y;
}

void point_3d::set_CordZ(int z) {
	_cord_z = z;
}

void point_3d::set_Cords(int x, int y, int z) {
	_cord_x = x;
	_cord_y = y;
	_cord_z = z;
}

int point_3d::get_CordX() {
	return _cord_x;
}

int point_3d::get_CordY() {
	return _cord_y;
}

int point_3d::get_CordZ() {
	return _cord_z;
}

int point_3d::distance(const point_3d& other) {
	point_3d first_pos(*this);
	point_3d second_pos(other);
	int first_part = (other._cord_x - _cord_x) * (other._cord_x - _cord_x);
	int second_part = (other._cord_y - _cord_y) * (other._cord_y - _cord_y);
	int third_part = (other._cord_z - _cord_z) * (other._cord_z - _cord_z);
	double distance = sqrt(first_part + second_part + third_part);
	int result = round(distance);
	return result;
}
bool point_3d::isEq(const point_3d& other) {
	return (_cord_x == other._cord_x && _cord_y == other._cord_y && _cord_z == other._cord_z);
}