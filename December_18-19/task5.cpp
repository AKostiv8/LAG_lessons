#include "stdafx.h"
#include <iostream>
#include <stdio.h>  

using namespace std;

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

