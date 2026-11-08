#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"ENTER NUMBER OF ROWS AND COLUMNS:";
    cin>>m;
    cin>>n;
    for(int i=1;i<=m;i++){
        for( int j=1;j<=n;j++)
        {
            if(i==j || i+j==n+1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}