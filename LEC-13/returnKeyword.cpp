#include<iostream>
using namespace std;
void fun(int n){
     cout<<n<<endl;
     if(n>20) return;
     cout<<"THE SQAURE OF "<<n <<" IS "<<n*n<<endl;
}
int main(){
       fun(17);
}