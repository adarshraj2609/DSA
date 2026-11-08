#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl; // Move to the next line after printing all numbers
    return 0;     // Indicate successful execution
}
