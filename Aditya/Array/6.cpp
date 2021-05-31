#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

void rotate(int arr[], int n){
    int temp = arr[n-1];
    for(int i = n-1; i>0; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

void rotateK(int arr[], int n, int k){
    // 1, 2, 3, 4 ,5 k = 2
    // 0, 1, 2, 3, 4
    // 3, 4, 5, 1, 2

    // 0 -> 2
    // 1 -> 3
    // 2 -> 4
    // 3 -> 0
    // 4 -> 1

    //(index + k) % n
    int arrCopy[n];
    std::copy(arr, arr+n, arrCopy);

    for(int i = 0; i<n; i++){
        arr[i] = arrCopy[(i+k+1)%n];
    }

    for(int i = 0; i<n; i++){
        std::cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    rotateK(arr, 5, 2);
    return 0;
}