#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	int n, i, sum = 0;
	cout << "Enter N: ";
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		sum += i;
	}

	cout << "Amount: " << sum << endl;
	system("PAUSE");
	return 0;
}