#include "stdafx.h"
#include <iostream>
#include <stdio.h>  

using namespace std;


void findMax(int x, int y, int z)
{
	if ((x == y) || (x == z) || (y == z)) {
		cout << "You have entered an equal numbers. " << endl;
	}
	else {
		if ((y > z) && (y > x)) {
			cout << "Max = " << y << endl;
		}
		else {
			if ((z > x) && (z > y)) {
				cout << "Max = " << z << endl;
			}
			else {
				if ((x > y) && (x > z)) {
					cout << "Max = " << x << endl;
				}
				else {
					cout << "Something going wrong. " << endl;
				}
			}
		}
	}
}


int main()
{
	int x;
	cout << "Enter number 1: ";
	cin >> x;
	int y;
	cout << "Enter number 2: ";
	cin >> y;
	int z;
	cout << "Enter number 3: ";
	cin >> z;
	findMax(x, y, z);

	system("PAUSE");
	return 0;
}


/*
int checkEqual(int *range) {
	if ((range[0] == range[1]) || (range[0] == range[2]) || (range[1] == range[2])) {
		return 0;
	}
}


void findMax(int *range) {
	int max = range[0];
	for (int j = 0; j < 3; j++)
	{
		if (range[j] > max) {
			max = range[j];
		}

	}

	cout << "MAX = " << max << endl;
}




int main()
{
	int max;
	int* range = new int[3];
	cout << "Enter numbers..." << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter " << i + 1 << " number: ";
		cin >> range[i];
		cin.sync();
	}

	if (checkEqual(range) == 0) {
		cout << "You try to compare equal numbers. " << endl;
	}
	else {
		findMax(range);
	}

	system("PAUSE");
	return 0;
}
*/

