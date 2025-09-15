#pragma once

class Point {
	int _cord_x;
	int _cord_y;

public:
	Point();
	Point(int, int);
	Point(const Point&);

	void set_CordX(int);
	void set_CordY(int);
	void set_Cords(int, int);

	int get_CordX();
	int get_CordY();

	int distance(const Point&);
	bool isEq(const Point&);

};