// #include <bits/stdc++.h>
// using namespace std;


// #define ll long long
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define vi vector<int>
// #define vll vector<long long>
// #define vc vector<char> 
// #define vvll vector<vector<long long > >
// #define vvc vector<vector<char> >
// #define mii map<int, int>
// #define si set<int>
// #define sl set<long long>
// #define sc set<char>
// #define pb push_back
// #define eb emplace_back
// #define MOD 1000000007
// #define PI 3.1415926535897932384626433832795
// #define read(type) readInt<type>()
// #define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define rep(i,a,b) for(ll i=a;i<=b;i++)
// ll min(ll a,int b) { if (a<b) return a; return b; }
// ll min(int a,ll b) { if (a<b) return a; return b; }
// ll max(ll a,int b) { if (a>b) return a; return b; }
// ll max(int a,ll b) { if (a>b) return a; return b; }
// ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
// ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
// string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
// string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
// bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
// void yes() { cout<<"YES\n"; }
// void no() { cout<<"NO\n"; }

// typedef long int int32;
// typedef unsigned long int uint32;
// typedef long long int int64;
// typedef unsigned long long int  uint64;



// int main()
// {
//    fast;
//    ll t = 1;
// //    cin>>t;
//    while(t--)
//    {
//        string s,p;
//        cin>>s>>p;
//        ll n = s.length(),k = p.length(),ans=0;
//     //   if(n==k){
//     //         cout<<(s==p)<<"\n";
//     //         continue;
//     //   }
//     //   unordered_map<string,int> mp;
//       string temp = ""; //s.substr(0,k);
//     // for(int i=0;i<k;i++){
//     //     temp+=s[i];
//     // }
//     // //    mp[temp]++;
//     // if(temp==p)ans++;
//     //   cout<<"tt"<<temp<<"\n";
//     // if(k==1){
//     //     for(ll i=1;i<n;i++){
//     //         if(s[i] == p[0]){
//     //             ans++;
//     //         }
//     //     }
//     //     cout<<ans<<"\n";
//     //     continue;
//     // }
//     // ll t=1;
//     // ll i=0;
//        for(ll i=0;i<n-k+1;i++){
//             // cout<<"tt"<<temp<<"\n";
//             // while(s[i]!=p[0] || s[i+k-1]!=p[k-1])i++;
//             if(s[i]==p[0] && s[(i+k-1)/2] == p[k/2] && s[i+k-1]==p[k-1] && s.substr(i,k)==p){
//                 ans++;
//             }
//                 // for(ll j=i;j<i+k;j++){
//                     // if(s[j]!=p[j-i]){
//                     //     t=0;
//                     //     break;
//                     // }
//                 // }
                
//             //     ans++;
//             // }
//             // temp.erase(0,1);
//             // temp.push_back(s[i+k-1]);
//             // if(temp==p)ans++;
//             // mp[temp]++;
//             // i++;
//        }
//        cout<<ans<<"\n";
//     //    cout<<mp[p]<<"\n";
//    }
//     return 0;
// }

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
#define rep(i,a,b) for(ll i=a;i<=b;i++)
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



int main()
{
   fast;
//   ll t = 1;
//   while(t--)
//   {
       string s,p;
       cin>>s>>p;
       ll n = s.length(),k = p.length(),ans=0,t=1;
       for(ll i=0;i<n-k+1;i++){
            if(s[i]==p[0] && s[i+k-1]==p[k-1]){
                for(ll j=i;j<i+k;j++){
                    if(s[j]!=p[j-i]){
                        t=0;
                        break;
                    }
                }
                ans+=(t==1);
            }
       }
       cout<<ans<<"\n";
    //    cout<<mp[p]<<"\n";
//   }
    return 0;
}