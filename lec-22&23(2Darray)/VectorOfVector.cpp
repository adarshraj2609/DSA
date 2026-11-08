#include <bits/stdc++.h>
using namespace std;
int main()
{   
    vector<int>v1={2,3,5,7};
    vector<int>v2={20,13,57,79};
    vector<int>v3={12,33,53,97};
    vector<vector<int>>v={v1,v2,v3};
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";

        }cout<<endl;
    }
}
