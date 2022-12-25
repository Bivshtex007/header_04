#include <iostream>
#include <cmath>
#include "all_h.h"
using namespace std;

int main() {

int (a);

	cout << "Enter Length of the Side of the Cube" << endl;
	cin >> a;
	cout << "Volume of Cube = " << cube(a) << endl;
	cout << "Volume of Pyramid inside Cube = " << pyramid_inside(a) << endl;
	cout << "Volume of Sphere inside Cube = " << sphere_inside(a) << endl;
	cout << "Volume of Sphere around Cube = " << sphere_around(a) << endl;

	return 0;

}