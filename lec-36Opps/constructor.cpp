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
    Student(){
        //Default Constructor
    }
};
int main(){

    Student x("Adarsh",34,6.8);
    Student y("Raj",161,8.9);
       cout<<"Name:"<<x.name<<" "<<"ROLL:"<<x.roll<<" "<<"CGPA:"<<x.cgpa<<endl;
       cout<<"Name:"<<y.name<<" "<<"ROLL:"<<y.roll<<" "<<"CGPA:"<<y.cgpa<<endl;
}