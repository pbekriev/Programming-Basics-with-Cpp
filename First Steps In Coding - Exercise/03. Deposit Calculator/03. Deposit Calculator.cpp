#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double deposit;
	int period;
	double yearPercent;
	
	cin >> deposit >> period >> yearPercent;

	double yearDec = yearPercent / 100;

	double result = deposit + period * ((deposit * yearDec) / 12);

	cout.setf(ios::fixed);
	cout.precision(2);

	cout << result;

	return 0;
}