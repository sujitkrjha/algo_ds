int sumNodes(Node* root,int sum){
    if(root==NULL)
        sum += 0;
    else{
        sum += root->data + sumNodes(root->left,sum) + sumNodes(root->right,sum);
    }
}
bool isSumTree(Node* root)
{
    if(root == NULL)
        return true;
    else if(root->left == NULL && root->right==NULL)
        return true;
    else if(root->data != (sumNodes(root->left,0) + sumNodes(root->right,0)))
        return false;
    else
        return true;
    return (isSumTree(root->left) && isSumTree(root->right));
}