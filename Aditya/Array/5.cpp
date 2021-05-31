/* LOGIC:
 * Insert all elements of a into mySet
 * Insert all elements of b into mySet
 * As there are no duplicate elements in the set, return
 * its size. That is the answer.

*/

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