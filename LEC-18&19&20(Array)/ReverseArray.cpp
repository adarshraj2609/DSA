#include<bits/stdc++.h>
#include<vector>
using namespace std;
void print(vector<int>&arr){
    for(int ele:arr) cout<<ele<<" ";
    cout<<endl;
}
int main(){
    vector<int> arr={2,5,8,5,3,2};
    int i=0,j=arr.size()-1;
    while (i<j)
    {
        // int temp=arr[i];
        // arr[i]=arr[j];
        // arr[j]=temp;
        swap(arr[i],arr[j]);
        i++;
        j--;
    }print(arr);
    
}