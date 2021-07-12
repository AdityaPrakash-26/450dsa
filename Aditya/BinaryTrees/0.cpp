#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node){
        vector<int> res;
        res.push_back(node->data);
        queue<Node*> q;
        
        q.push(node);
        
        while(!q.empty()){
            if(q.front()->left){
                q.push(q.front()->left);
                res.push_back(q.front()->left->data);
            }
            
            if(q.front()->right){
                q.push(q.front()->right);
                res.push_back(q.front()->right->data);
            }
            
            q.pop();
        }
        return res;
    }
};