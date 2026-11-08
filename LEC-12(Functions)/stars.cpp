#include<iostream>
using namespace std;
void starTraingle( int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
      cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int a;
    cout<<"ENTER THE VALUE OF A:";
    cin>>a;
    starTraingle(a);
       int b;
    cout<<"ENTER THE VALUE OF B:";
    cin>>b;
    starTraingle(b);
       int c;
    cout<<"ENTER THE VALUE OF C:";
    cin>>c;
    starTraingle(c);
}