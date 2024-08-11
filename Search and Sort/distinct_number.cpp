#include<iostream>
#include<algorithm>

using namespace std;

int distinct(int arr[],int n){
    sort(arr,arr+n);

    int res = 0;

    for (int i = 0;i < n; i++){
        while(i < n-1 && arr[i] == arr[i+1])
            i++;
        
        res++;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0;i<n;i++){
        cin >> arr[i];
    }

    cout<<distinct(arr,n);
}