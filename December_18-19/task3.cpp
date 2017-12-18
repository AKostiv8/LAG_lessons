#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


void count(float number_m, float number_n, float number_p, float number_q)
{
	if (number_q == 0) {
		cout << "No solution" << endl;
	}
	else {
		float result = ((number_m*number_n) - (number_p / number_q));
		cout << result << endl;
	}
}


int main()
{
	float m;
	cout << "Enter number M: ";
	cin >> m;
	float n;
	cout << "Enter number N: ";
	cin >> n;
	float p;
	cout << "Enter number P: ";
	cin >> p;
	float q;
	cout << "Enter number Q: ";
	cin >> q;
	count(m, n, p, q);

	system("PAUSE");
	return 0;
}
