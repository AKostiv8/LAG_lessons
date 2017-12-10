#include "stdafx.h"
#include <iostream>

using namespace std;






int main()
{
	int max;
	int* range = new int[3];
	//int range[3];
	cout << "Enter numbers..." << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter " << i + 1 << " number: ";
		cin >> range[i];
		cin.sync();
	}


	if ((range[0] > range[1]) && (range[0]>range[2])) {
		max = range[0];
		cout << "Maximum: " << max << endl;
	}
	else {
		if ((range[1] > range[0]) && (range[1] > range[2])) {
			max = range[1];
			cout << "Maximum: " << max << endl;
		}
		else {
			max = range[2];
			cout << "Maximum: " << max << endl;
		}
	}

	system("PAUSE");
	return 0;
}

