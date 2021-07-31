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

class Solution {
public:
    int findInorderSuccessor(TreeNode* node){
        node = node->right;

        while(node->left){
            node = node->left;
        }
        
        return node->val;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == nullptr){
            return root;
        } else if(root->val>key){
            root->left=deleteNode(root->left,key);
        } else if(root->val<key){
            root->right=deleteNode(root->right,key);
        } else {
            if(root->right == nullptr){
                return root->left;
            }else if(root->left == nullptr){
                return root->right;
            }else{
			    //replace the root value by find the minimum val from right side
                root->val = findInorderSuccessor(root);
                root->right = deleteNode(root->right, root->val);
            }
        }
        return root;
    }
};