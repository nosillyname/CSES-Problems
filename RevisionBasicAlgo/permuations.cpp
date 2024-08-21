// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void solve(int i,vector<vector<int>> & ans,vector<int> & a,vector<int>& num,int n,vector<bool> & vis){
    if(a.size()==n){
        ans.push_back(a);
        return;
    }else{
        for(int j=0;j<n;j++){
            if(vis[j])continue;
            vis[j] = true;
            a.push_back(num[j]);
            solve(j+1,ans,a,num,n,vis);
            a.pop_back();
            vis[j] = false;
        }
        return;
    }
}


int main() {
    vector<int> num = {1,2,3,4};
    vector<vector<int>> ans;
    vector<int> a;
    int n = 4;
    cout<<"dushi"<<(1<<n)<<"\n";
    vector<bool> vis(n,0);
    solve(0,ans,a,num,4,vis); // by recursion 
    // by bit n numbers have 2power n subsets like 25 = 11001 which shows set {0,3,4}
    // for(int b=0;b<(1<<n);b++){
    //     vector<int> a;
    //     for(int i=0;i<n;i++){
    //         if(b&(1<<i)){ // doing and to check wheather it is 0 or not if it is 0 leave it otherwise add 
    //             a.push_back(num[i]);
    //         }
    //     }
    //     ans.push_back(a);
    // }
    for(auto x:ans){
        for(auto i :x){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    cout<<"NO of subsets =="<<ans.size()<<" ";
    return 0;
}