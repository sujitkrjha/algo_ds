// COmplexity N = Number of Nodes
bool search(Node* root, int x)
{
    if(root==NULL)
        return false;
    else if(root->data==x)
        return true;
    return (search(root->left,x) || search(root->right,x));
}
//Complexity H = Height of tree
bool search(Node* root, int x)
{
    if(root==NULL)
        return false;
    else if(root->data==x)
        return true;
    else if(root->data > x)
        return search(root->left,x);
    else
        return search(root->right,x);
}