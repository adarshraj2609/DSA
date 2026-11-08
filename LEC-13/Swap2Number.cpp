#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"ENETR THE NUMBER A AND B:"<<endl;
    cin>>a>>b;
    // a=a+b;
    // b=a-b;
    // a=a-b;
    a=(a+b)-(b=a);  //swap in one line
    cout<< "THE SWAP NUM IS :"<<a<<" "<<b<<endl;
    
}