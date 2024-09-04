#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef long unsigned int lui;
 
void readNElements(vector<lui> &arr, lui n) {
    for(lui index=0; index<n; index++) {
        lui value;
        cin>>value;
        arr[index] = value;
    }
}
 
int main() {
    lui n, m, k;
    // n = no. of applicants
    // m = no. of appartments
    // k = maximum allowed diff
    cin>>n>>m>>k;
 
    vector<lui> desire(n), apartment(m);
    readNElements(desire, n);
    readNElements(apartment, m);
    sort(desire.begin(), desire.end());
    sort(apartment.begin(), apartment.end());
    
    // for (auto val : desire) {
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // for (auto val : apartment) {
    //     cout<<val<<" ";
    // }
    // cout<<endl;
 
    lui ap = 0, alloted = 0;
    for (lui index=0; index<n && ap<m;) {
        if (labs(desire[index]-apartment[ap])<=k) {
            index++;
            ap++;
            alloted++;
        }
        else if (apartment[ap]<desire[index]) {
            ap++;
        }
        else {
            index++;
        }
    }
    cout<<alloted<<endl;
}
 
/*
60 45 80 60
30 60 75
 
45 60 60 80
30 60 75
 
 
*/