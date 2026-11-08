#include<iostream>
using namespace std;
int main(){
    float cp,sl;
    cout<<"ENTER THE COST PRICE:";
    cin>>cp;
    cout<<"ENTER THE SELLING PRICE:";
    cin>>sl;
     int profit=0;
     int result=profit+sl;
     int pro=sl-cp;
     int loss=cp-sl;
     if(result>cp) cout<<"PROFIT "<<pro ;
     else if(cp==sl) cout<<"NO LOSS NO PROFIT";
     else cout<<"LOSS "<< loss;
}