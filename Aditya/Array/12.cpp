#include <iostream>
using namespace std;
int maxSubarraySum(int arr[], int n){
        int sum = INT_MIN;
        int maxSumHere = 0;
        for(int i = 0; i<n; i++) {
            maxSumHere = maxSumHere + arr[i];
            if(sum<maxSumHere){
                sum = maxSumHere;
            }
            if(maxSumHere<0){
                maxSumHere = 0;
            }
        }
        return sum;            
}

int minSubarraySum(int arr[], int n){
    int sum = INT_MAX;
    int minSumHere = INT_MAX;

    for(int i = 0; i<n; i++){
        if(minSumHere>0){
            minSumHere = arr[i];
        } else {
            minSumHere += arr[i];
        }
        if(minSumHere<sum){
            sum = minSumHere;
        }
    }
    return sum;
}