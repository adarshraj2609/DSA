//WAP in c++ to implment the valid age driving check
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"ENETR YOU AGE:";
    cin>>age;
    if(age>=18)
    {
        cout<<"YOU CAN DRIVE";
    }
    else{
        cout<<"YOU CANNOT DRIVE";
    }
    return 0;
}