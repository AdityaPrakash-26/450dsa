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
    TreeNode* next;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

void populateNext(TreeNode *root){
    populateNextWithParent(root, nullptr);
}

void populateNextWithParent(TreeNode *root, TreeNode *parent){
    if(root == nullptr){
        return;
    }
    
    if(root->left){
        root->left->next = root;
    }
    
    if(root->right){
        root->next = root->right;
    } else {
        root->next = parent;
    }
    
    //how to populate -1 for the right most node?
    
    populateNextWithParent(root->left, root);
    populateNextWithParent(root->right, root);
}