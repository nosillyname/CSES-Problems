#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define vc vector<char> 
#define vvll vector<vector<long long > >
#define vvc vector<vector<char> >
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


void solve(ll y,vvc & mesh,vll &col,vll &diag1,vll & diag2,ll & ans){
    // cout<<"h"<<"\n";
    if(y==mesh.size()){
        ans++;
        return;
    }else{
        for(int i=0;i<8;i++){
            if(mesh[y][i]=='*' || col[i] || diag1[y+i] || diag2[i-y+8-1])continue;
            col[i] = diag1[i+y] = diag2[i-y+8-1] = 1;
            solve(y+1,mesh,col,diag1,diag2,ans);
            col[i] = diag1[i+y] = diag2[i-y+8-1] = 0;
        }
    }
}


int main()
{
   fast;
   ll t = 1;
//    cin>>t;
   while(t--)
   {
        int n = 8;
        vvc mesh(8,vc(8,' '));
        for(ll i=0;i<8;i++){
                for(ll j=0;j<8;j++){
                    cin>>mesh[i][j];
                }
        }
        vll col (8,0),diag1(16,0),diag2(16,0);
        ll ans = 0;
        solve(0,mesh,col,diag1,diag2,ans);
        cout<<ans<<"\n";

   }
    return 0;
}