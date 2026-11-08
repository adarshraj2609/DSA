#include<bits/stdc++.h>
using namespace std;
#include <vector>
int main(){
    vector<int> arr(8,18);
    for (int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.push_back(65);
    arr.pop_back();
}