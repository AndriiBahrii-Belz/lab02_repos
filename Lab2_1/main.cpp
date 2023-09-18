#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;
int main()
{
	double x, z1, z2;

	cout << "x = "; cin >> x; //ввід

	double sec = 1 / cos(2*x);

	z1 = (cos(x) + sin(x)) / (cos(x) - sin(x)); //1 рівняння
	z2 = (tan(2 * x)) + sec; //2 рівняння

	cout << "z1 = " << z1 << endl; //вивід
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}