#include "point.h"
#include "cmath"
Point::Point() : _cord_x(0), _cord_y(0) {}
Point::Point(int x, int y) : _cord_x(x), _cord_y(y) {}
Point::Point(const Point& other) : _cord_x(other._cord_x), _cord_y(other._cord_y) {}

void Point::set_CordX(int x) {
	_cord_x = x;
}

void Point::set_CordY(int y) {
	_cord_y = y;
}

void Point::set_Cords(int x, int y) {
	_cord_x = x;
	_cord_y = y;
}

int Point::get_CordX() {
	return _cord_x;
}

int Point::get_CordY() {
	return _cord_y;
}

int Point::distance(const Point& other) {
	Point first_pos(*this);
	Point second_pos(other);
	int left_part = (other._cord_x - _cord_x) * (other._cord_x - _cord_x);
	int right_part = (other._cord_y - _cord_y) * (other._cord_y - _cord_y);
	double distance = sqrt(left_part + right_part);
	int result = round(distance);
	return result;
}
bool Point::isEq(const Point& other) {
	return (_cord_x == other._cord_x && _cord_y == other._cord_y);
}