#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	int n, i = 0;
	cout << "Enter N: ";
	cin >> n;


	do {
		i++;
		cout << "Aftercondition cycle" << endl;
	} while (i < n);

	cout << endl;
	system("PAUSE");
	return 0;
}