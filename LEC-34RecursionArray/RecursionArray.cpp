#include<iostream>
#include<vector>
using namespace std;
void printRec(vector<int>&arr,int indx){
    if(indx==arr.size()) return;
    cout<<arr[indx]<<" ";
    printRec(arr,indx+1);
}
int main(){
    vector<int>arr={5,7,8,4,4,2,32,877,9,0};
    printRec(arr,0);

}