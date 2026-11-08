#include <bits/stdc++.h>
using namespace std;

void Print(vector<int>& arr) {
    for (int ele : arr) {
        cout << ele << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {3, 2, 5, 4, 7, 9, 6};
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - 1 - i; j++) {

            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }

        cout << "Pass " << i + 1 << ": ";
        Print(arr);
    }

    return 0;
}