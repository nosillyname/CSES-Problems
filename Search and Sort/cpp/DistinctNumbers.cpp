#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n,0);
    int temp = 1;
    
    // unordered_set<int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            temp++;
        }
    }
    cout<<temp<<"\n";
    // cout<<mp.size()<<"\n";
    // int temp = 0;

    // unordered_map<int,int> mp;

    return 0;
}