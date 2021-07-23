#include <iostream>
#include <queue>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int d){
        data = d;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode* mirrorTheTreeRecursive(TreeNode* root){

    if(root == nullptr){
        return root;
    }

    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;

    mirrorTheTreeRecursive(root->left);
    mirrorTheTreeRecursive(root->right);

    return root;
}

TreeNode* mirrorTheTreeIterative(TreeNode* root){
    queue<TreeNode*> queue;

    queue.push(root);

    while(!queue.empty()){
        if(queue.front() != nullptr){
            TreeNode* temp = root->right;
            root->right = root->left;
            root->left = temp;

            queue.push(queue.front()->left);
            queue.push(queue.front()->right);
            queue.pop();
        } else {
            queue.pop();
        }
    }
    return root;
}

int main() {
    
}