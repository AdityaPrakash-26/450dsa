#include<iostream>
using namespace std;

int maxSubarraySum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]>=0){
            sum+=arr[i];
        } else {
            if(sum+arr[i]>=0){
                sum+=arr[i];
            } else {
                sum = 0;
            }
        }
    }
    return sum;
}

int main() {
    int arr[] = {9, -51, -20, -13, -51, 40, -21, 75,
                -24, 29, -86, 5, -38, 15, 48, -87, -9, 
                42, 39, 64, 47, -63, 22, -81, -20, -100, 28};
    
    int n = 27;

    cout<<maxSubarraySum(arr, n);
}