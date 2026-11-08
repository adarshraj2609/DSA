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
    if(a>=b && a>=c) cout<<"A IS GREATER THAN B AND C:";
    else if(b>=a && b>=c) cout<<"B IS GREATER THAN A AND C:";
    else cout<<"C IS GREATER THAN A AND B";

}
