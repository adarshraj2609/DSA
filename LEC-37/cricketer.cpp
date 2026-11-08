#include<iostream>
using namespace std;
class cricketer{
    public:
    int runs;
    string name;
    float avg;
    cricketer(string name,int runs,float avg){
        this->name=name;
        this->avg=avg;
        this->runs=runs;
    }
};
int main(){
    cricketer c1("Virat Kholi",55.7,100000);
    cricketer c2("Rohit Sharma",49.4,11000);
    cricketer*ptr=&c1;
    cout<<(*ptr).name<<endl;

}