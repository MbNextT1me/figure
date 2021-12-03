#include <iostream>
#include <vector> 
#include "Geometr.h"

using namespace std;


int main() {
	vector<Figure*> my_figure;

	Circle myCirle(10.0);
	Rectangle myRectangle(3.0, 4.0);
	Triangle myTriangle(2.0, 2.0, 2.0);

	my_figure.push_back(&myCirle);
	my_figure.push_back(&myRectangle);
	my_figure.push_back(&myTriangle);

	double S_total = 0.0;

	for (int i = 0; i < my_figure.size(); i++) {
		S_total += my_figure[i]->calc_area();
		cout << "This is " << my_figure[i]->get_name() << endl;
	}

	cout << "Total S = " << S_total << endl;

	return 0;
}
