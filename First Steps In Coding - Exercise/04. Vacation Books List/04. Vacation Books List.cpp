#include <iostream>
using namespace std;

int main()
{
    int bookPages, sheetPerHour, days;

    cin >> bookPages >> sheetPerHour >> days;
    int hoursPerDay;
    hoursPerDay = (bookPages / sheetPerHour) / days;
    cout << hoursPerDay;

    return 0;
}
