#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};

vector<int> levelOrder(Node* root){
    if (!root){
    return {};
}

vector<int> res;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()){    
        int n = q.size();
        
        for(int i = 0; i < n; i++){
            Node* temp = q.front();
            q.pop();
                
            // Print the left most element
            // at the level
            if (i == 0)
                res.push_back(temp->data);
            
            // Add left node to queue
            if (temp->left != NULL)
                q.push(temp->left);

            // Add right node to queue
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
    return res;
}

vector<int> leftView(Node *root){

vector<int> res = levelOrder(root);

return res;
}
