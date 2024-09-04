#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef long unsigned int lui;
 
int main() {
    lui n;
    cin>>n;
 
    vector<lui> arr(n);
    for (lui index=0; index<n; index++) {
        lui value;
        cin>>value;
        arr[index] = value;
    }
 
    lui prev = arr[0], steps = 0;
    for (lui index = 0; index<n; index++) {
        if (arr[index]<prev) {
            steps += (prev-arr[index]);
        }
        else {
            prev = arr[index];
        }
    }
    cout<<steps<<endl;
}