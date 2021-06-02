#include<unordered_map>
using namespace std;

int getPairsCount(int arr[], int n, int sum){
    unordered_map<int, int> m;

    // Store counts of all elements in map m
    for (int i = 0; i < n; i++){
        m[arr[i]]++;
    }

    int twice_count = 0;

    for (int i = 0; i < n; i++) {
        twice_count += m[sum - arr[i]]; //counting elements

        if (sum - arr[i] == arr[i])
            twice_count--;
    }
    // return the half of twice_count 
    return twice_count / 2; //returning pairs instead of elements
}