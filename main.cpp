#include <iostream>
#include "calculator.h"
#include <stdexcept>  
using namespace std;

int main() {
    int choice, a, b;

    cout << "Simple Calculator\n";
    cout << "-----------------\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter two integers: ";
    cin >> a >> b;

    try {
        switch (choice) {
            case 1:
                cout << "Result: " << calculator << add(a, b) << "\n";
                break;
            case 2:
                cout << "Result: " << calculator sub(a, b) << "\n";
                break;
            case 3:
                cout << "Result: " << calculator mul(a, b) << "\n";
                break;
            case 4:
                cout << "Result: " << calculator div(a, b) << "\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << "\n";
    }

    return 0;
}
