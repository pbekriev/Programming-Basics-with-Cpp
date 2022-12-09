#include <iostream>
using namespace std;

int main()
{
	double area;
	cin >> area;
	double price;
	price = area * 7.61;
	double discount;
	discount = price * 0.18;
	double totalPrice;
	totalPrice = price - discount;
	cout << "The final price is: " << totalPrice << " lv.";
	cout << "The discount is: " << discount << " lv.";

	return 0;
}
