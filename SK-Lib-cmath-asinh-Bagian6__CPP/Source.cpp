#include <iostream>
#include <cmath>
#include <conio.h>

/*	Source by Programiz
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

#define PI 3.141592654
using namespace std;

int main() {
	int x = 11;
	double result;

	result = asinh(x);
	cout << "asinh(x) = " << result << " radian" << endl;

	// result in degrees
	cout << "asinh(x) = " << result * 180 / PI << " degree" << endl;

	_getch();
	return 0;
}