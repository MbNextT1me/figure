#include "geometr.h"
#include <string.h>

const double M_PI = 3.14;

Rectangle::Rectangle() {
	a = 0.0;
	b = 0.0;
}

Rectangle::Rectangle(double a, double b) {
	this->a = a;
	this->b = b;
}

double Rectangle::calc_area() {
	return a*b;
}

double Rectangle::calc_perimetr() {
	return 2.0*(a+b);

}

char* Rectangle::get_name() {
	char* name = new char[10];
	strncpy_s(name, 10, "Rectangle", 10);
	return name;
}