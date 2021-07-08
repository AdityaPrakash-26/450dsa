class Node{
public:
    int data;
    Node * left = nullptr;
    Node * right = nullptr;
};

int diameter(struct Node* tree){
    if (tree == nullptr)
        return 0;
    int lheight = height(tree->left);
    int rheight = height(tree->right);

    //for going through all the possibilities
    int ldiameter = diameter(tree->left);
    int rdiameter = diameter(tree->right);

    return max(lheight + rheight + 1,
            max(ldiameter, rdiameter));
}

int height(struct Node* node){
    int x,y;
    
    if(node != nullptr){
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