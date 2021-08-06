#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <stack>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode* LCA(TreeNode *root, int n1, int n2){
    if(root->val > n1 && root->val > n2){
        LCA(root->left, n1, n2);
    } else if(root->val < n1 && root->val < n2){
        LCA(root->right, n1, n2);
    } else {
        return root;
    }
}

int main() {
    
}