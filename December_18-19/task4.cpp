#include "stdafx.h"
#include <cmath>
#include <iostream>

using namespace std;


void count(float x)
{
	float y;

	if (x < 5) {
		y = ((4 * pow(x, 2) + 1) / (x - 5));
		cout << y << endl;
	}
	else {
		y = 3 * pow(x, 2) - 2;
		cout << y << endl;
	}
}


int main()
{
	float x;
	cout << "Enter X: ";
	cin >> x;
	count(x);

	system("PAUSE");
	return 0;
}