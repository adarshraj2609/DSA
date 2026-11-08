#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    float cgpa;
    Student(string n,int r,float c){
          name=n;
          roll=r;
          cgpa=c;
    }
    void print(){
        cout<<name<<" "<<roll<<" "<<cgpa<<endl;
    }
    // Student(){
    //     //Default Constructor
    // }
};
int main(){

    Student x("Adarsh",34,6.8);
    Student y("Raj",161,8.9);
    x.print();

}