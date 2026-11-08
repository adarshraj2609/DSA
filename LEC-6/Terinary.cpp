#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    // (n%2==0)?cout<<"EVEN":cout<<"ODD";
    // cout<<((n%2==0)?"EVEN":"ODD");

    int x=6;
    int y=(x<=23)?((x>12)?x-4:x*4):((x<12)?x/4:x+4);
    cout<<y;
}