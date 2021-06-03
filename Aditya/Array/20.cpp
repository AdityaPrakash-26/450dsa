#include<unordered_map>
using namespace std;

bool subArrayExists(int arr[], int n){
    unordered_map<int, int> mp;
    int sum = 0;
    
    for(int i = 0; i<n; i++){
        if(arr[i]==0){
            return true;
        }
        sum+=arr[i];
        if(sum==0){
            return true;
        }
        if(mp[sum]>=1){
            return true;
        } else {
            mp[sum]++;
        }
    }
    return false;
}