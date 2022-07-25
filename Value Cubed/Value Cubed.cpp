#include <iostream>
using namespace std;

double number;

int cubeIt(int number);

int main()
{
    cout << "Give me a number and I will cube it for ya, then hit enter: ";
    cin >> number;

    cout << "Here is " << number << " CUBED: " << cubeIt(number);
}

int cubeIt(int number) {
    return number * number * number;
}
