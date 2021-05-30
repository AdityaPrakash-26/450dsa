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
        int min = INT_MAX;
        int max = INT_MIN;
        for(int i = 0; i<n; i++){
            if(arr[i] > max){
                max = arr[i];
            }
            if(arr[i] < min){
                min = arr[i];
            }
        }

        cout<<min<<" "<<max<<endl;

    }
}