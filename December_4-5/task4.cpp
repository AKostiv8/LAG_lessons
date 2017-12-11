#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void count(float amount)
{
	float eu = amount / 31.8335135;
	float usd = amount / 27.27;
	cout << "Amount in EU: " << eu << endl;
	cout << "Amount in USD: " << usd << endl;
}


int main()
{
	float uah;
	cout << "Enter amount in UAH: ";
	cin >> uah;
	count(uah);

	system("PAUSE");
	return 0;
}