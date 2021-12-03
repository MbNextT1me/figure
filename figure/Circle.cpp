#include "geometr.h"
#include <math.h>
#include <string.h>

const double M_PI = 3.14;

Circle::Circle() {
	R = 0.0;
}

Circle::Circle(double R) {
	this->R = R;
}

double Circle::calc_area() {
	return M_PI * R * R;
}

double Circle::calc_perimetr() {
	return 2.0 * M_PI * R;

}

char* Circle::get_name() {
	char* name = new char[10];
	strncpy_s(name, 10, "Circle", 10);
	return name;
}
