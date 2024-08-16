#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            cout<<n/2<<" ";
            n/=2;
        }else{
            n=n*3+1;
            cout<<n<<" ";
        }
        if(n==1)break;
    }
    return 0;
}