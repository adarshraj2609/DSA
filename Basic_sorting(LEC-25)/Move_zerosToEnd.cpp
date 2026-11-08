#include <bits/stdc++.h>
using namespace std;
void Print(vector<int>&arr){
     for(int ele:arr){
        cout<<ele<<" ";
     }cout<<endl;
}
int main(){
    vector<int>arr={1,0,4,0,-4,-3,0,7,0,6,-2};
    int n=arr.size();
    Print(arr);
    int total_swaps=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
                total_swaps++;
            }
        }
    }Print(arr);
    cout<<"Total_swaps:"<<total_swaps<<endl;
}