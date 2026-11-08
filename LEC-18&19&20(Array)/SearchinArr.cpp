#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr []={62,5,5,-1,88,-34,5};
    int n=sizeof(arr)/4;
    int target=5;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag=true;
            break;
        }
    }
    if(flag==true) cout<<"ELEMENTS FOUND"<<endl;
    else cout<<"ELEMENTS NOT FOUND"<<endl;
}