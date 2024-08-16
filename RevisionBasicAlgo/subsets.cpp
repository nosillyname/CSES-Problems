#include <bits/stdc++.h>
using namespace std;

void solve(int i,vector<vector<int>> & ans,vector<int> & a,vector<int>& num,int n){
    if(i==n){
        ans.push_back(a);
        return;
    }else{
        solve(i+1,ans,a,num,n);
        a.push_back(num[i]);
        solve(i+1,ans,a,num,n);
        a.pop_back();
        // solve(i,ans,a,num,n);
        return;
    }
}


int main() {
    vector<int> num = {1,2,3,4};
    vector<vector<int>> ans;
    vector<int> a;
    solve(0,ans,a,num,4);
    for(auto x:ans){
        for(auto i :x){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    cout<<"NO of subsets =="<<ans.size()<<" ";
    return 0;
}