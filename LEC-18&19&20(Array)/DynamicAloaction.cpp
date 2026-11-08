#include<bits/stdc++.h>
using namespace std;
int main()
{
//    int arr[7];static allocation
   int* arr=new int [7]; //dynamic allocation
   arr[4]=4;
   for(int i=0;i<7;i++){
      cout<<arr[i]<<" ";
   }
   
}