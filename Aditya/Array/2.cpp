#include <iostream>
#include <algorithm>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
    int n = r-l+1;
    sort(arr, arr+n);
    return arr[k-1];
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n];

        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }

        cout<<kthSmallest(arr, 0, n, k);

    }
}