

#include "stdafx.h"
#include <iostream>
#include <math.h> 
using namespace std;


int main()
{
	int r=0;

	cout << "Enter the radius of circle = ";
	cin >> r;
	
	double area = 3.14*pow(radius,2);

	double circum = 2 * 3.14*radius;

	cout << "Area of circle is = " << area << endl;
	cout << "Circumference of circle is = " << circum << endl;
	return 0;
}

