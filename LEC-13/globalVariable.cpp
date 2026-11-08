#include<bits/stdc++.h>
using namespace std;
int x=100; // global vaarible
void fun(){
   x=44;
}
int main(){
   cout<<x<<endl;
   fun();
   cout<<x<<endl;   
}