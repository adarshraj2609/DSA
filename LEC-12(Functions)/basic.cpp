#include<iostream>
using namespace std;
void adarsh(){
  cout<<"Adarsh is obidient boy\n";
}
void kishan(){
  cout<<"Kishan is obidient boy\n";
  adarsh();
}
void ram(){
  cout<<"Ram is obidient boy\n";
  kishan();
}
void sita(){
  cout<<"Sita is obidient boy\n";
  ram();
}
int main(){
    cout<<"\nHiee Adarsh Raj\n";
    sita();//call lagai

}