#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v{1,2,3};
    for(auto it:v)
        cout<<it<<" ";
    set<int> s;
    cout<<endl;
    int n = v.size();
    for(int i = 0 ; i<n;i++)
        s.insert(v[i]);
    for(auto k:s)
        cout<<k<<" ";
}