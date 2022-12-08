#include <iostream>
using namespace std;

int main()
{
    string name, famili, town;
    int age;
    cin >> name >> famili >> age >> town;
    cout << "You are " << name << " " << famili << ", a " << age << "-years old person from " << town << ".";

    return 0;
}
