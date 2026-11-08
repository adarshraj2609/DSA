#include <bits/stdc++.h>
using namespace std;
void Print(vector<int>&arr){
     for(int ele:arr){
        cout<<ele<<" ";
     }cout<<endl;
}
int main(){
    vector<int>arr={1,4,3,7,6,3};
    int n=arr.size();
    Print(arr);
    //insertion sort
    for(int i=1;i=n-1;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    Print(arr);
}