#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int n,m;
    cin>>n>>m;
    vector<int> a(n,0);
    for(int i=0;i<n;i++)cin>>a[i];
    set<int>st;
    set<pair<int,int>> stp;
    int ans=1;
    for(int i=0;i<n;i++){
        if(st.find(a[i]+1)!=st.end()){
            ans++;
            stp.insert(make_pair(a[i],a[i]+1));
        }
        st.insert(a[i]);
    }
   
    for(int i=0;i<m;i++){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        swap(a[l],a[r]);
        pair<int,int> temp_pair = make_pair(a[l],a[r]);
        auto it = stp.find(temp_pair);
        if(it != stp.end()){
            ans--;
            stp.erase(it);
        }else{
            ans++;
            stp.insert(temp_pair);
        }
        cout<<ans<<"\n";
        
    }
}

int main()
{
    solve();
    return 0;
}