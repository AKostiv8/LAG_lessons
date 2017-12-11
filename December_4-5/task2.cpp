#include "stdafx.h"
#include <iostream>

using namespace std;

void count(int variable_a, int variable_b)
{
	variable_b = variable_a + variable_b;
	variable_a = variable_b - variable_a;
	variable_b = variable_b - variable_a;
	cout << "Variable A equal:" << variable_a << endl;
	cout << "Variable B equal:" << variable_b << endl;
}


int main()
{
	int a;
	cout << "Enter variable A: ";
	cin >> a;
	int b;
	cout << "Enter variable B: ";
	cin >> b;
	count(a, b);

	system("PAUSE");
	return 0;
}
