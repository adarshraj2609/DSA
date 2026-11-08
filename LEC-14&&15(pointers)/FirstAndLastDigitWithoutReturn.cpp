#include<bits/stdc++.h>
using namespace std;
    // int n;
    // cin>>n;
    // int count =(n==0)?1:0;
    // while(n!=0){
    //     count++;
    //     n/=10;
    // }
    // count<<count;


     void countDigit(int n,int* ptr){
        int count=(n==0)?1:0;
        while (n!=0)
        {
          count++;
          n/=10;
        }
        *ptr=count;
        
    }
    int main(){
     int n;
     cin>>n;
     int c=0;
     countDigit(n,&c);
     cout<<c;
    }