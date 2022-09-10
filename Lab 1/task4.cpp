
#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	int sub = 0;
	int multi = 0;
	float div = 0;
	float mod = 0;

	cout << "Enter First number = ";
	cin >> num1;
	cout << "Enter Second number = ";
	cin >> num2;

	sum = num1 + num2;
	sub = num1 - num2;
	multi = num1*num2;
	div = num1 / num2;
	mod = num1%num2;

	cout << "**************************************";

	cout << "\nAddition of two numbers is = " << sum << endl;

	cout << "Subtraction of two number is = " << sub << endl;

	cout << "Multipication of two number is = " << multi << endl;

	cout << "Division of two number is = " << div << endl;

	cout << "Mod of two number is = " << mod << endl;




	return 0;
}

