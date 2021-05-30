//did not solve on first try. REDO!!!!
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];

        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }

        int j = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] < 0) {
                swap(arr[i], arr[j]);
                j++;
            }
        }

        for(int i = 0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}