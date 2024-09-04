#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    long long n, x;
    
    cin>>n>>x;
    
    vector<long long> coins(n);
    for (int i=0; i<n; i++) {
        cin>>coins[i];
    }
    sort(coins.begin(), coins.end());
    vector<long long> dp(x+1, INT_MAX);
    dp[0] = 0;
 
    for (int money=1; money<=x; money++) {
        for (int index=0; index<n && coins[index]<=money; index++) {
            if (coins[index]<=money) {
                dp[money] = min(dp[money],dp[money-coins[index]]+1);
            }
        }
    }
    if (dp[x]==INT_MAX)
        dp[x] = -1;
    cout<<dp[x]<<endl;
 
}