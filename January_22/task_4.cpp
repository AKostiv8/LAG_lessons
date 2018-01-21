#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	int n, i;
	cout << "Enter N: ";
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cout << i + 1 << "#" << endl;
	}

	cout << endl;
	system("PAUSE");
	return 0;
}