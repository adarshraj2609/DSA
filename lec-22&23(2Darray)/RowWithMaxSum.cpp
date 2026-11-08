#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[3][4];
    int arr[3][4] = {{5, 8, 1, 2}, {1, 0, 4, 4}, {2, 6, 5, 3}};
    int maxRow = -1, maxSum = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            maxRow = i;
        }
    }
    cout << maxSum<< " " << maxRow;
}
