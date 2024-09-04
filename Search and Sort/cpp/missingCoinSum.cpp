#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef long unsigned int lui;
typedef long long unsigned int llui;
 
int main() {
    lui N;
    cin>>N;
 
    vector<lui> coins(N);
    for (lui index = 0; index<N; index++) {
        lui value;
        cin>>value;
        coins[index] = value;
    }
    sort(coins.begin(), coins.end());
 
    llui lookup = 1;
    for (auto coin : coins) {
        if (coin>lookup) {
            break;
        }
        lookup += coin;
    }
    cout<<lookup<<endl;
}