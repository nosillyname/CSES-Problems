// Online C++ compiler to run C++ program online
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


void dfs(int s,long long int ans,vector<int> adj[],vector<long long int > & visited,vector<pair<long long int,long long int > >& dist){
    if(visited[s]==1)return;
    visited[s] =1;
    // int count = 0;
    for (auto x:adj[s]){
        if(visited[x]==1)continue;
        dist.pb(make_pair(x,ans+1));
        dfs(x,ans+1,adj,visited,dist);
    }
    // cout<<s<<count+1<<" ";
    // return count+1;
}


int main()
{
   fast;
   ll t = 1;
//    cin>>t;
   while(t--)
   {
        ll n,a,b,t;
        cin>>n;
        if(n==1){
            cout<<0<<"\n";
            break;
        }
        // cout<<"dd"<<n<<"\n";
        vll visited(n+1,0),vis(n+1,0);
        vector<int> adj[n+1];
        t = n-1;
        while(t--){
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }
        ll ind=1,m=0,ans=0;
        vector<pair<long long int,long long int > > dist,count;
        dfs(1,ans,adj,visited,dist);
        for(auto x:dist){
            if(x.second ==n/2){
                // ind = x.first;
                // m = x.second;
                cout<<x.first<<"\n";
            }
        }
        // dfs(ind,0,adj,vis,count);
        // m=0;
        // for(auto x:count){
        //     // cout<<x.first<<"  "<<x.second<<"\n";
        //     // m = max(m,x.second);
        //     if(x.second==(n/2));
        // }
        // cout<<m<<"\n";
        // for(auto x:)
        // for(ll i =0;i<=n;i++){
        //     if(adj[i].size()>m){
        //         m =adj[i].size();
        //         // cout<<i<<m<<" ";
        //         ind = i;
        //     }
        // }
        // ll ans = 0;
        // visited[ind] = 1;
        // // cout<<"ind"<<ind<<"\n";
        // vll temp;
        // for(auto x:adj[ind]){
        //     temp.pb(dfs(x,ans,adj,visited));
        // }
        // sort(temp.begin(),temp.end(),[](ll x1,ll x2){return x1>x2;});
        // for(auto x:temp){
        //     cout<<x<<" ";
        // }
        // dfs(1,ans,adj,visited);
        // cout<<temp[0]+temp[1]<<"\n";
        
   }
    return 0;
}