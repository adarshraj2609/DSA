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
    int total_swaps=0;
    for(int i=0;i<n-1;i++){
        int swaps=0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaps++;
                total_swaps++;
            }
        }if(swaps==0) break;
    }Print(arr);
    cout<<"Total_swaps:"<<total_swaps<<endl;


}