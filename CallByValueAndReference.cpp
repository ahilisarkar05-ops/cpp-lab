#include <iostream>
using namespace std;

void callByValue(int x)
{
    x = x + 5;
    cout << "Value inside call by value function: " << x << endl;
}

void callByReference(int &x)
{
    x = x + 5;
    cout << "Value inside call by reference function: " << x << endl;
}

int main()
{
    int a, b;

    cout << "Enter value for call by value: ";
    cin >> a;

    cout << "Before call by value: " << a << endl;
    callByValue(a);
    cout << "After call by value: " << a << endl;

    cout << endl;

    cout << "Enter value for call by reference: ";
    cin >> b;

    cout << "Before call by reference: " << b << endl;
    callByReference(b);
    cout << "After call by reference: " << b << endl;

    return 0;
}
