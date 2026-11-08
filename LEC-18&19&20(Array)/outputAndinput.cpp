#include<bits/stdc++.h>
using namespace std;
int main(){
    // int arr[]={73,90,45,21,56,33,533};
    // for(int i=0;i<=6;i++){
    //     cout<<arr[i]<<" ";}
    int n;
    cout<<"ENTER THE ARRAY SIZE ";
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ARRAY ELEMENSTS ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"THE ARRAY IS:"; 
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<endl;
    }
}