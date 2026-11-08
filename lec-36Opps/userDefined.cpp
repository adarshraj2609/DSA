#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    float cgpa;
};
int main(){
       Student s;
       s.name="Adarsh";
       s.cgpa=7.1;
       s.cgpa=8.4;
       cout<<s.name<<" "<<s.roll<<" "<<s.cgpa<<endl;
}