//take int input and print the absolute value of that interger
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"ENTER THE NUMBER:";
    cin>>num;
    if(num<0) cout<<-num;
    else cout<<num;
}