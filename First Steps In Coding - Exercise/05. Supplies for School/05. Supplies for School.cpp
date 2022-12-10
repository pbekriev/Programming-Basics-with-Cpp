#include <iostream>
using namespace std;

int main()
{
	int pens, markers, chemical, discount;
	cin >> pens >> markers >> chemical >> discount;
	double pensValue = pens * 5.8;
	double markersValue = markers * 7.2;
	double chemicalValue = chemical * 1.2;
	double discountValue = discount / 100.0;
	double totalValue = (pensValue + markersValue + chemicalValue) - ((pensValue + markersValue + chemicalValue) * discountValue);
	cout << totalValue;

	return 0;
}
