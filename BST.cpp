//https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/tutorial/

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int arr[1010]={0},cnt=0;
bool flag=false;
struct node{
    int data;
    struct node *left,*right;
};
struct node *root = NULL;
struct node *newNode(int data) 
{ 
    struct node *temp =  new node(); 
    temp->data = data; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
void preorder(struct node *root,int q)
    {
        if(root)
        {
            if(root->data==q)
                flag = true,++cnt;
            if(flag==true)
                printf("%d\n",root->data,q);
            preorder(root->left,q);
            preorder(root->right,q);
        }
    }
struct node* insert(struct node* root, int data)
    {
        if (root == NULL)
        {
            return newNode(data);
        }
        else
        {
            if (data <= root->data)
            {
                root->left  = insert(root->left, data);
            }
            else
                root->right = insert(root->right, data);
            return root;
        }
    }

int main()
{
    int n,q;
    cin>>n>>arr[0];
    root=insert(root,arr[0]);
    for(int i=1;i<n;++i)
    {
        cin>>arr[i];
        insert(root,arr[i]);
    }
    cin>>q;
    preorder(root,q);
    return 0;
    
}