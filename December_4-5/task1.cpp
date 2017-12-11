#include "stdafx.h"
#include <iostream>

using namespace std;

void count(float number_m, float number_n, float number_p, float number_q)
{
	float middle = ((number_m + number_n + number_p + number_q) / 2);
	cout << middle << endl;
}


int main()
{
	int m;
	cout << "Enter number M: ";
	cin >> m;
	int n;
	cout << "Enter number N: ";
	cin >> n;
	int p;
	cout << "Enter number P: ";
	cin >> p;
	int q;
	cout << "Enter number Q: ";
	cin >> q;
	count(m, n, p, q);

	system("PAUSE");
	return 0;
}
