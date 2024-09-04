#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    long long n, q;
    cin>>n>>q;
    
    vector<long long> arr(n), prefix(n+1);
    prefix[0] = 0;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
        prefix[i+1] = prefix[i]+arr[i];
 
    }
 
    for (int i=0; i<q; i++) {
        int a, b;
        cin>>a>>b;
        cout<<prefix[b]-prefix[a-1]<<endl;
    }
}