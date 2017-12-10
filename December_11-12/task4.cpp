#include "stdafx.h"
#include <iostream>

using namespace std;


void count(int x)
{
	if (x > 5) {
		int y = 5 * x;
		cout << y << endl;
	}
	else {
		int y = x + 5;
		cout << y << endl;
	}
}


int main()
{
	int x;
	cout << "Enter X: ";
	cin >> x;
	count(x);

	system("PAUSE");
	return 0;
}