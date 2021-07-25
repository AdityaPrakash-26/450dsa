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

void recursiveInorder(TreeNode* root){
    if(root==nullptr){
        return;
    }

    recursiveInorder(root->left);
    cout<<root->data<<" ";
    recursiveInorder(root->right);
    return;
}