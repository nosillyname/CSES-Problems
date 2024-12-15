#include <bits/stdc++.h>

using namespace std;

int main() {
    // Write C++ code here
    string s;
    cin>>s;
    map<char,int> mp;
    int sz = s.length();
    for(int i=0;i<sz;i++){
        mp[s[i]]++;
    }
    vector<pair<int,char>> vc;
    for(auto x:mp){
        vc.push_back(make_pair(x.second,x.first));
    }
    sort(vc.begin(),vc.end());
    string ans ="";
    for(auto x:vc){
        while(x.first--){
            ans+=x.second;
        }

    }
    cout<<ans<<"\n";

    return 0;
}