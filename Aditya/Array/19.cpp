#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];

        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr, arr+n);

        int negIndex = 1;
        int posIndex = 0;

        for(int i = 0; i<n; i++){
            if(arr[i]>0){
                posIndex = i;
                break;
            }
        }

        for(int i = 1; i<n; i+=2){
            swap(arr[negIndex], arr[posIndex]);
        }
    }
}