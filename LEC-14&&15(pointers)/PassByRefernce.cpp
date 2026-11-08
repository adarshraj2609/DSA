#include<bits/stdc++.h>
using namespace std;
void change(int* x){
    *x=20;
}
int main(){
    int x=7;
    change(&x);
    cout<<x<<endl; 
}