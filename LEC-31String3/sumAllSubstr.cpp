#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "926";
    int sum = 0;

    for (int i = 0; i < str.length(); i++) {
        for (int j = i; j < str.length(); j++) {
            sum += stoi(str.substr(i, j - i + 1)); //stringTOinterger
        }
    }
    cout << "Sum = " << sum << endl;

    return 0;
}