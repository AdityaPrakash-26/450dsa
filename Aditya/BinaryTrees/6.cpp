#include <iostream>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

void recursivePreorder(TreeNode* root){
    if(root == nullptr){
        return;
    }

    cout<<root->data;
    recursivePreorder(root->left);
    recursivePreorder(root->right);
    return;
}