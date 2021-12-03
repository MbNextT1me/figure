#include "geometr.h"
#include <math.h>
#include <string.h>

Triangle::Triangle() {
	a = 0.0;
	b = 0.0;
	c = 0.0;
}

Triangle::Triangle(double a, double b, double c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

double Triangle::calc_perimetr() {
	return a + b + c;
}

double Triangle::calc_area() {
	double p = 0.5 * calc_perimetr();
	double r = sqrt(((p-a)*(p-b)*(p-c)) / p);
	return r * calc_perimetr() * 0.5;
}

char* Triangle::get_name() {
	char* name = new char[10];
	strncpy_s(name, 10, "Triangle", 10);
	return name;
}