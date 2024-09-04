#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef long unsigned int lui;
 
void computeLPSArray(string &pat, lui M, vector<lui> &lps) {
    lui len = 0; // length of the previous longest prefix suffix
    lps[0] = 0;  // lps[0] is always 0
 
    lui i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}
 
lui KMPSearch(string &pat, string &txt) {
    lui M = pat.length();
    lui N = txt.length();
 
    vector<lui> lps(M);
    computeLPSArray(pat, M, lps);
 
    lui i = 0; // index for txt[]
    lui j = 0; // index for pat[]
    lui count = 0;
 
    while (i < N) {
        if (pat[j] == txt[i]) {
            i++;
            j++;
        }
 
        if (j == M) {
            count++;
            j = lps[j - 1];
        } else if (i < N && pat[j] != txt[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
 
    return count;
}
 
int main() {
    string str1, str2;
    cin >> str1 >> str2;
 
    lui result = KMPSearch(str2, str1);
    cout << result << endl;
 
    return 0;
}