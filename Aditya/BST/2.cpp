#include <iostream>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode* findMinValue(TreeNode*root){
    while(root->left){
        root=root->left;
    }
    return root;
}

TreeNode* findMaxValue(TreeNode*root){
    while(root->right){
        root=root->right;
    }
    return root;
}

int main() {
    TreeNode* root = new TreeNode(2);
    TreeNode* node1 = new TreeNode(1);
    TreeNode* node2 = new TreeNode(3);
    TreeNode* node3 = new TreeNode(4);
    TreeNode* node4 = new TreeNode(5);

    root->left = node1;
    root->right = node2;
    root->right->left = node3;
    root->right->right = node4;

    cout<<findMaxValue(root)->val<<endl;
    cout<<findMinValue(root)->val<<endl;
}