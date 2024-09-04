#include <bits/stdc++.h>
 
using namespace std;
const int MOD = 1000000007;
 
int main() {
    int n, x;
    
    cin>>n>>x;
    
    vector<int> coins(n);
    for (int i=0; i<n; i++) {
        cin>>coins[i];
    }
    sort(coins.begin(), coins.end());
    vector<int> dp(x+1, 0);
    dp[0] = 1;
 
    for (int money=1; money<=x; money++) {
        for (int index=0; index<n && coins[index]<=money; index++) {
            if (coins[index]<=money) {
                dp[money] = (dp[money]+dp[money-coins[index]])%MOD;
            }
        }
    }
    cout<<dp[x]<<endl;
}
