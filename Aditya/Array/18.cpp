#include<unordered_map>
#include<vector>
using namespace std;

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3){
    unordered_map<int, int> m1;
    unordered_map<int, int> m2;
    unordered_map<int, int> m3;
    vector<int> ans;

    for (int i = 0; i < n1; i++)
        m1[A[i]]++;
    for (int i = 0; i < n2; i++)
        m2[B[i]]++;
    for (int i = 0; i < n3; i++)
        m3[C[i]]++;

    // check if frequency of element greater than 0 in all
    // three maps
    for (int i = 0; i < n1; i++) {
        if (m1[i] > 0 and m2[i] > 0 and m3[i] > 0)
            ans.push_back(A[i]);

    return ans;
}