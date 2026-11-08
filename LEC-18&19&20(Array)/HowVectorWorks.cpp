#include<bits/stdc++.h>
using namespace std;
#include <vector>
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(24);
    v.push_back(28);
    v.push_back(26);
    v.push_back(4);
    v.pop_back();
    v.pop_back();
    v.pop_back();

for (int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
}
