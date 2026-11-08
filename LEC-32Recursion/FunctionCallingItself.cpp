#include <bits/stdc++.h>
using namespace std;
void adarsh( int n){
    if(n==0) return;
    cout<<"adarsh"<<endl;
    adarsh(n-1);
}
int main()
{ 
    adarsh(3);
}