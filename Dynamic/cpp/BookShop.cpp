// #include <bits/stdc++.h>
// using namespace std;

// // int memoization(vector<vector<int>>&dp,int i,int j,vector<int> pages,vector<int> price){
// //     if(i<0 || j<0)return 0;
// //     // if(dp[i][j]!=-1)return dp[i][j];
// //     int temp=0;
    
// //     if(j>=price[i]){
// //         dp[i][j] = max(memoization(dp,i-1,j-price[i],pages,price)+pages[i],memoization(dp,i-1,j,pages,price));
// //     }else{
// //         dp[i][j] = max(dp[i-1][j],memoization(dp,i-1,j,pages,price));
// //     }
// //     return dp[i][j]== -1 ? 0 : dp[i][j];
// // }


// int memoization(vector<vector<int>>&dp,int i,int j,vector<int> pages,vector<int> price,int n){

//     if(i<0 || j<0)return 0;
//     int temp =0;
//     for(int k=0;k<i;k++){
//         temp =max(temp,memoization(dp,k-1,j-price[k],pages,price,n)+pages[k]);
//     }
//     dp[i][j] = temp;
//     return temp;
    
// }

// void solve(){
    
//    int n,x;
//    cin>>n>>x;
//    vector<int> pages(n,-1),price(n,-1);
//    for(int i=0;i<n;i++)cin>>price[i];
//    for(int i=0;i<n;i++)cin>>pages[i];
// //   vector<int> dp(x,-1);
// vector<vector<int>> dp(n,vector<int>(x+1,0));
//   cout<<memoization(dp,n-1,x,pages,price,n)<<"\n";
// //   cout<<dp[0][0];
//     // for(int i=0;i<n;i++){
//     //     for(int j=1;j<=x;j++){
//     //         if(price[i]>j)continue;
//     //         dp[i][j] = max(dp[i][j-price[i]]+pages[i],dp[i][j]);
            
//     //     }
//     // }

//     // for(auto s:dp){
//     //     cout<<"\n";
//     //     for(auto i :s)cout<<i<<" ";
//     // }
// }

// int main()
// {
//     solve();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int rec(int n,int x,vector<int>pages,vector<int>price,vector<int>&dp){
    if(n<0)return 0;
    int temp =0;
    if (dp[x]!= -1) return dp[x];
    if(x>=price[n])temp = rec(n-1,x-price[n],pages,price,dp)+pages[n];
    dp[x]= max(temp,rec(n-1,x,pages,price,dp));
    return dp[x];
}

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> pages(n,0),price(n,0);
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    for(int i=0;i<n;i++){
        cin>>pages[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=x;j++){
            int temp = j>=price[i-1] ? dp[i-1][j-price[i-1]]+pages[i-1] : 0;
            dp[i][j] = max(temp,dp[i-1][j]); 
        }
    }
    cout<<dp[n][x]<<"\n";
    // cout<<rec(n-1,x,pages,price,dp)<<"\n";
}


int main(){
    solve();
    return 0;
}