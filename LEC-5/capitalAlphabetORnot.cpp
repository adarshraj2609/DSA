#include<iostream>
using namespace std;
int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // Check if input is a capital alphabet
    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is a capital alphabet." << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a small alphabet." << endl;
    }
    else {
        cout << ch << " is not an alphabet." << endl;
    }

    return 0;
}
