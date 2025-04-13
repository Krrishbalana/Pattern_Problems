// *      *
// * *    * *
// * * *  * * *
// * * *  * * *
// * *    * *
// *      *
#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Upper Half
    for(int i = 1; i <= n; i++) {
        // Left Stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }

        // Spaces between two star triangles
        int spaces = 2 * (n - i);
        for(int j = 1; j <= spaces; j++) {
            cout << "  ";
        }

        // Right Stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    // Lower Half
    for(int i = n - 1; i >= 1; i--) {
        // Left Stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }

        // Spaces between
        int spaces = 2 * (n - i);
        for(int j = 1; j <= spaces; j++) {
            cout << "  ";
        }

        // Right Stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
