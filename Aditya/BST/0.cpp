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

TreeNode* findValue(TreeNode* root, int value){
    while(root != nullptr){
        if(root->data == value){
            return root;
        } else if(root->data < value){
            root = root->right;
        } else {
            root = root->left;
        }
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

    cout<<findValue(root, 5)->data<<endl;
}