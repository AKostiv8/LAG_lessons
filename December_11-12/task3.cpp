#include "stdafx.h"
#include <iostream>

using namespace std;


void count(int number_m, int number_n, int number_p, int number_q)
{
	if (number_q == 0) {
		cout << "No solution" << endl;
	}
	else {
		int result = ((number_m*number_n) - (number_p / number_q));
		cout << result << endl;
	}
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
