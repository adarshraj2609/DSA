#include <bits/stdc++.h>
using namespace std;
void Print(vector<int> &arr)
{
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {5,4,3,6,2,1,-7};
    int n = arr.size();
    Print(arr);
    int t_swaps = 0;
    // Selection sort
    for (int j = 0; j < n - 1; j++)
    {
        int min = arr[j], min_Index = j;
        for (int i = j; i < n; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
                min_Index = i;
                t_swaps++;
             
            }
        }
        swap(arr[j], arr[min_Index]);
        
    }
    Print(arr);
    cout << "Total_swaps:" <<t_swaps << endl;
    
}