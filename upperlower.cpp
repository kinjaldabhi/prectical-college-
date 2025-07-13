#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers (start and end of range): ";
    cin >> a >> b;

    int lower, upper;

    if (a < b) {
        lower = a;
        upper = b;
    } else {
        lower = b;
        upper = a;
    }

    cout << "Lower limit: " << lower << endl;
    cout << "Upper limit: " << upper << endl;

    return 0;
}