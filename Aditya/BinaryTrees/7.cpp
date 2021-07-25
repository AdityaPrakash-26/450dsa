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

void recursivePostorder(TreeNode* root){
    if(root == nullptr){
        return;
    }

    recursivePostorder(root->left);
    recursivePostorder(root->right);
    cout<<root->data<<" ";
    return;
}

int main() {
    
}