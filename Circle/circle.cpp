#include "iostream"
#include "circle.h"
#include "point.h"

Circle::Circle() : _rad(1), _cent(0, 0) {}
Circle::Circle(int rad) : _rad(rad), _cent(0, 0) {}
Circle::Circle(int x, int y, int rad) : _rad(rad), _cent(x, y) {}
Circle::Circle(int rad, Point& cord) : _rad(rad), _cent(cord) {}
Circle::Circle(const Circle& other) : _rad(other._rad), _cent(other._cent) {}

void Circle::set_CordsCentre(int x, int y) {
	_cent.set_Cords(x, y);
}
void Circle::set_rad(int rad) {
	_rad = rad;
}

bool Circle::isEq(const Circle& other) {

	return (_cent.isEq(other._cent) && _rad == other._rad);
}

int Circle::distanceCent(const Circle& other) {
	return _cent.distance(other._cent);
}

Point Circle::get_Cent() {
	return _cent;
}
int Circle::get_CentX() {
	return _cent.get_CordX();
}
int Circle::get_CentY() {
	return _cent.get_CordY();
}
int Circle::get_rad() {
	return _rad;
}