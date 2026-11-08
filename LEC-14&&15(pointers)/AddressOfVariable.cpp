#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=7;
    int* p=&x;
    cout<<x<<endl;
    *p +=10; //change kar skte hai value in x:
    cout<<x; 
}
