#include <iostream>
using namespace std;

int main() {
    int rows = 7;

    for (int i = 1; i <= rows; i++) {
        
        if (i == 1 || i == 7) {
            for (int j = 1; j <= 5; j++) {
                cout << "x";
            }
            cout << endl;
        }

       
        else if (i == 2 || i == 6) {
            for (int j = 1; j <= 7; j++) {
                if (j % 2 != 0)
                    cout << "x";
                else
                    cout << " ";
            }
            cout << endl;
        }

       
        else if (i == 3 || i == 5) {
            for (int j = 1; j <= 11; j++) {
                if (j == 1 || j == 5 || j == 9)
                    cout << "x";
                else
                    cout << " ";
            }
            cout << endl;
        }

   
        else if (i == 4) {
            cout << "x ";
            for (int j = 1; j <= 6; j++) {
                cout << "x";
            }
            cout << " ";
            for (int j = 1; j <= 8; j++) {
                cout << "x";
            }
            cout << endl;
        }
    }

    return 0;
}