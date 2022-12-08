#include <iostream>
using namespace std;

int main()
{
    string name;
    int number;
    cin >> name >> number;
    int  needHours;
    needHours = number * 3;

    cout << "The architect " << name << " will need " << needHours << " hours to complete " << number << " project/s.";

    return 0;
}
