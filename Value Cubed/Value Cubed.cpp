#include <iostream>
using namespace std;

double number;

int main()
{
    cout << "Give me a number and I will cube it for ya, then hit enter: ";
    cin >> number;
    cout << "Here is " << number << " CUBED: " << (number * number * number);
}

