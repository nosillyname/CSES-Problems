#include <bits/stdc++.h>
using namespace std;


#define ll long long int
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vvll vector<vector<long long> > 
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;


vvll multiply(vvll & a,vvll &b){
    int n = a.size();
    vvll response(n,vll(n,0));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            for(ll k=0;k<n;k++){
                // response[i][j] = ((response[i][j]%MOD)+((a[i][k]%MOD) * (b[k][j]*MOD)))%MOD;
                response[i][j] += (a[i][k] * b[k][j])%MOD;
            }
        }
    }
    return response;
}

vvll matrixexponentiate(vvll &a ,ll n){
    if (n==0){
        ll sz = a.size();
        vvll ans(sz,vll(sz,0));
        for(ll i=0;i<sz;i++){
            ans[i][i] = 1;
        }
        return ans;
    }
    if(n==1){
        return a;
    }
    vvll temp  = matrixexponentiate(a,n/2);
    vvll ans = multiply(temp,temp);

    if(n&1){
        ans = multiply(ans,a);
    }
    return ans;
}

int main()
{
   fast;
   ll t = 1;
//    cin>>t;
   while(t--)
   {
        ll n;
        cin>>n;
        vvll a (2,vll(2,0));
        a[0][1] = a[0][0] = a[1][0] = 1;
        vvll ans = matrixexponentiate(a,n);
        ll sz = ans.size();
        // for(ll i =0;i<sz;i++){
        //     for(ll j =0;j<sz;j++){
        //         cout<<ans[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        cout<<ans[0][1]%MOD<<"\n";
   }
    return 0;
}