#include <iostream>
#include <climits>
using namespace std;

void maxSubArraySum(long long int a[], long long size)
{
    long long int max_so_far = LLONG_MIN, max_ending_here = 0;
    long long int start = 0, end = 0, s = 0;

    for (long long int i = 0; i < size; i++) {
        max_ending_here += a[i];

        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }

        if (max_ending_here < 0) {
            max_ending_here = 0;
            s = i + 1;
        }
    }
    cout << max_so_far;
}

int main()
{   
    long long n;
    cin >> n;

    long long arr[n];
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }

    maxSubArraySum(arr, n);
    return 0;
}
