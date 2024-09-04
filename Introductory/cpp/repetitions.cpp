#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef long unsigned int lui;
 
int main() {
    string dna;
    cin>>dna;
 
    lui N = dna.length(), count = 1, ans = 1;
    char prev = dna[0];
    for (lui index = 1; index<N; index++) {
        if (prev == dna[index]) {
            count++;
        }
        else {
            prev = dna[index];
            count = 1; 
        }
        ans = max(ans, count);        
    }
    cout<<ans<<endl;
}