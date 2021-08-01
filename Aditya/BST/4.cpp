
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
}
;
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        TreeNode* prev = nullptr;
        return validate(root, prev);
    }

    bool validate(TreeNode* node, TreeNode* &prev) {
        if (node == nullptr) {
            return true;
        }

        if (!validate(node->left, prev)) {  //if validation returned true, do not return false
            return false;
        }

        if (prev != nullptr && prev->val >= node->val) {
            return false;
        }
        //the first time it is initialized, prev is the leftmost node
        //for every call, prev will ensure that it is a trailing node
        //when compared to our current node, while our current node is
        //performing inorder traversal, we use prev to compare its value
        //to the current node's value, and figure out if the inorder 
        //traversal is correct or not. This way, we eliminate the need
        //to use an auxilary array to store inorder.
        prev = node;   

        return validate(node->right, prev);
    }
};