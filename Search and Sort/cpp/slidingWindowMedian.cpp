#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, k, mid;
    cin >> n >> k;
 
    vector<int> arr(n), medians(n - k + 1);
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    multiset<int> first_half, other;
    for (int i = 0; i < k; i++) {
        first_half.insert(arr[i]);
    }
 
    while (first_half.size() > (k + 1) / 2) {
        auto largest = prev(first_half.end());
        other.insert(*largest);
        first_half.erase(largest);
    }
 
    int j = 0;
    medians[j] = *prev(first_half.end());
 
    for (int i = k; i < n; i++) {
        if (arr[i - k] <= *prev(first_half.end())) {
            first_half.erase(first_half.find(arr[i - k]));
        } else {
            other.erase(other.find(arr[i - k]));
        }
 
        if (!first_half.empty() && arr[i] <= *prev(first_half.end())) {
            first_half.insert(arr[i]);
        } else {
            other.insert(arr[i]);
        }
 
        if (first_half.size() < (k + 1) / 2) {
            first_half.insert(*other.begin());
            other.erase(other.begin());
        } else if (first_half.size() > (k + 1) / 2) {
            auto largest = prev(first_half.end());
            other.insert(*largest);
            first_half.erase(largest);
        }
 
        medians[++j] = *prev(first_half.end());
    }
 
    for (int median : medians) {
        cout << median << " ";
    }
    cout << '\n';
 
    return 0;
}