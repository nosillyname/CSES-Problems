#include<iostream>
#include<vector>

using namespace std;


int count_combinations(vector<long int> arr,vector<long int> dp, int sum){
    
    if(sum == 0)
        return 1;
    
    // if(sum < 0)
    //     return 0;
   
    if( dp[sum] != -1)
        return dp[sum];

    int count = 0;

    for (int coin:arr){
        if(sum >= coin)
        {
            count = (count + count_combinations(arr,dp,sum - coin));
        }
        // cout<<count<<endl;


    }
    return dp[sum] = count;
}

int main(){

    long int n,sum;
    cin >> n >> sum;
    
    vector<long int> arr(n); //array of coin denominations
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    vector<long int> dp(sum + 1, -1);

    long int c = count_combinations(arr,dp,sum);

    cout << c << endl;

    return 0;

}