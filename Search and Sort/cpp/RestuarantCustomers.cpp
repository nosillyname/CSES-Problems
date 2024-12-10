#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int n;
    cin>>n;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a.push_back(make_pair(x,1));
        a.push_back(make_pair(y,-1));
    }
    sort(a.begin(),a.end(),[](auto a,auto b){return a.first<b.first;});
    // for(auto x:a)cout<<x.first<<x.second<<"\n";
    int maxCount=0,currCount=0;
    for(int i=0;i<2*n;i++){
        currCount+=a[i].second;
        maxCount = max(maxCount,currCount);
        
    }
    cout<<maxCount<<"\n";
}

int main()
{
    solve();
    return 0;
}