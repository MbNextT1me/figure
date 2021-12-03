#pragma once
#ifndef _Geometr_
#define _Geometr_


class Figure {
public:
	virtual	double calc_area() = 0;
	virtual	double calc_perimetr() = 0;
	virtual	char* get_name() = 0;
};


class Circle : public Figure {
	double R;
public:
	Circle();
	Circle(double R);

	double calc_area();
	double calc_perimetr();
	char* get_name();
};

class Rectangle : public Figure {
	double a;
	double b;
public:
	Rectangle();
	Rectangle(double a, double b);

	double calc_area();
	double calc_perimetr();
	char* get_name();
};

class Triangle : public Figure {
	double a;
	double b;
	double c;
public:
	Triangle();
	Triangle(double a, double b, double c);

	double calc_area();
	double calc_perimetr();
	char* get_name();
};

#endif