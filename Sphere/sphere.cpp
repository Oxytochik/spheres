#include "iostream"
#include "point_3d.h"
#include "sphere.h"

sphere::sphere() : _rad(1), _cent(0, 0, 0) {}
sphere::sphere(int rad) : _rad(rad), _cent(0, 0, 0) {}
sphere::sphere(int x, int y, int z, int rad) : _rad(rad), _cent(x, y, z) {}
sphere::sphere(int rad, point_3d& cord) : _rad(rad), _cent(cord) {}
sphere::sphere(const sphere& other) : _rad(other._rad), _cent(other._cent) {}

void sphere::set_CordsCentre(int x, int y, int z) {
	_cent.set_Cords(x, y, z);
}
void sphere::set_rad(int rad) {
	_rad = rad;
}

bool sphere::isEq(const sphere& other) {

	return (_cent.isEq(other._cent) && _rad == other._rad);
}

int sphere::distanceCent(const sphere& other) {
	return _cent.distance(other._cent);
}

point_3d sphere::get_Cent() {
	return _cent;
}
int sphere::get_CentX() {
	return _cent.get_CordX();
}
int sphere::get_CentY() {
	return _cent.get_CordY();
}
int sphere::get_CentZ() {
	return _cent.get_CordZ();
}
int sphere::get_rad() {
	return _rad;
}