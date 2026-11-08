#include<iostream>
using namespace std;
int main()
{
    //give the ith day of week ,tell which day it is?
    int day;
    cout<<"ENTER A NUMBERS:";
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"MONDAY";
        break;
    case 2:
        cout<<"TUESDAY";
        break;
    case 3:
        cout<<"WEDNESDAY";
        break;
    case 4:
        cout<<"THURSDAY";
        break;
    case 5:
        cout<<"FRIDAY";
        break;
    case 6:
        cout<<"SATARUDAY";
        break;
    case 7:
        cout<<"SUNDAY";
        break;
    default:
        break;
    }
    
}