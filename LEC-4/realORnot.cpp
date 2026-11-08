//Take real number input and check if it is an integer or not
#include<iostream>
using namespace std;
int main(){
       float x;
       cout<<"ENTER REAL NUMBER\n";
       cin>>x;
       int y=(int)x;  //TYPECASTING
       if(x==y) cout<<"Interger!!";
       else cout<<"Not interger!!";
    
}