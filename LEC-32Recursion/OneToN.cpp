#include <bits/stdc++.h>
using namespace std;
//METHOD-1
// int n;
// void print( int x){
//     if(x>n) return;
//     cout<<x<<" ";
//     print(x+1);
// }
// int main(){
//     cin>>n;
//     print(4);
// }

//METHOD-2
void print( int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    print(n);
}