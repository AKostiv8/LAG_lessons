#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void count(float number_a, float number_b, string question)
{
	if (question == "Amount" || question == "amount") {
		float result = pow(number_a, 2) + 2 * number_a*number_b + pow(number_b, 2);
		cout << result << endl;
	}
	else
	{
		float result = pow(number_a, 2) - 2 * number_a*number_b + pow(number_b, 2);
		cout << result << endl;
	}
}


int main()
{
	int a;
	cout << "Enter number A: ";
	cin >> a;
	int b;
	cout << "Enter number B: ";
	cin >> b;
	string ask;
	cout << "Amount or difference of squares: ";
	cin >> ask;
	count(a, b, ask);

	system("PAUSE");
	return 0;
}
