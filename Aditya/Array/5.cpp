/* LOGIC:
 * Insert all elements of a into mySet
 * Insert all elements of b into mySet
 * As there are no duplicate elements in the set, return
 * its size. That is the answer.
*/

#include <iostream>
#include <set>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
    set<int> mySet;
    for(int i = 0; i<n; i++){
        mySet.insert(a[i]);
    }
    for(int i = 0; i<m; i++){
        mySet.insert(b[i]);
    }
    return mySet.size();
}

void doIntersection(int a[], int n, int b[], int m){
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] > b[j]) {
            j++;
        } else if (b[j] > a[i]) {
            i++;
        } else {
            // when both are equal
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
}