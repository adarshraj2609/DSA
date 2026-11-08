#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"ENETR THE NUMBER 1:";
    cin>>a;
    cout<<"ENETR THE NUMBER 2:";
    cin>>b;
    cout<<"ENETR THE NUMBER 3:";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b) cout<<"IT IS A TRIANGLE";
    else cout<<"IT IS NOT A TRIANGLE";
    
}