class Node{
public:
    int data;
    struct Node* left;
    struct Node* right;
};

int height(Node* node){
    int x,y;
    
    if(node!=nullptr){
        x = height(node->left);
        y = height (node->right);
        
        if(x>y){
            return x+1;
        } else {
            return y+1;
        }
    }
    return 0;
}