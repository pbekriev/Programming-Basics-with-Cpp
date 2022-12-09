#include <iostream>
using namespace std;

int main()
{
	int dogFood;
	int catFood;
	cin >> dogFood >> catFood;
	double dogTotalprice;
	double catTotalprice;
	dogTotalprice = dogFood * 2.5;
	catTotalprice = catFood * 4.0;
	double TotalSum = dogTotalprice + catTotalprice;
	cout << TotalSum << " lv.";

	return 0;
}
