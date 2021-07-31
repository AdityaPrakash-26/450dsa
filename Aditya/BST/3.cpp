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

int findInorderPredecessor (TreeNode* node){
    node = node->left;

    while(node->right){
        node = node->right;
    }
    
    return node->val;
}

int findInorderSuccessor(TreeNode* node){
    node = node->right;

    while(node->left){
        node = node->left;
    }
    
    return node->val;
}