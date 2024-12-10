#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    int n;
    cin>>n;
    vector<int> a(n,0);
    for(int i=0;i<n;i++)cin>>a[i];
    set<int>st;
    int ans=1;
    for(int i=0;i<n;i++){
        if(st.find(a[i]+1)!=st.end()){
            ans++;
        }
        st.insert(a[i]);
    }
    cout<<ans<<"\n";
}

int main()
{
    // std::cout<<"Hello World";
    solve();
    return 0;
}