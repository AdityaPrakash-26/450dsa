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
    
    int smallest = n1 < n2 ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3);
    
    for (int i = 0; i < smallest; i++) {
        if(m1[i]>0 && m2[i]>0 && m3[i]>0){
            ans.push_back(A[i]);
        }
    }
return ans;
}