
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
#define sl set<long long>
#define sc set<char>
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rep(a,b) for(ll i=a;i<=b;i++)
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





void dfs(int & ans,vector<int> adj[],vector<int> &visited,int n,int x,vector<int> &counted){
    if(visited[n]==1)return;
    visited[n]=1;
    if(adj[n].size()==2 && counted[n]==0 && counted[x]==0){
        ans++;
        counted[n]=1;
        counted[x]=1;
        // return;
    }
    for(auto s:adj[n]){
        dfs(ans,adj,visited,s,n,counted);
    }
}
 
 
int main()
{
   fast;
   ll t=1;
//    cin>>t;
   while(t--)
   {
       int n,m;
       cin>>n>>m;
       vector<int> a(n,0);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       int ans = 1 ;
       if(a[0]==0){
            if(a[1]==m)ans*=2;
            else ans*=3;
       }
       if(a[n-1]==0){
            if(a[n-2]==m)ans*=2;
            else ans*=3;
       }
       for(int i=1;i<n-1;i++){
            if()
       }
   }
    return 0;
}