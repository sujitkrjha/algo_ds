#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
struct btree
{
	int data;
	struct btree *left;
	struct btree *right;
};

//typedef btree * Node
struct btree * root = NULL;

struct btree * newNode(int data)
{
	struct btree * tempu = new btree();
	tempu->data = data;
	tempu->left = NULL;
	tempu->right = NULL;
	return tempu;
}

struct btree * insert(struct btree * node, int data)
{
	//struct btree * temp = root;
	if(node == NULL)
	{
		return newNode(data);
	}
	else
	{
		if(node->data >= data)
		{
			node->left = insert(node->left, data);
		}
		else
		{
			node->right = insert(node->right, data);
		}
		return node;
	}
}
void preorder(struct btree * node)
{
	if(node)
	{
		cout<<node->data<<" ";
		preorder(node->left);
		preorder(node->right);
	}
}

void postorder(struct btree * node)
{
	if(node)
	{
		postorder(node->left);
		postorder(node->right);
		cout<<node->data<<" ";
	}
}

void inorder(struct btree * node)
{
	if(node)
	{
		inorder(node->left);
		cout<<node->data<<" ";
		inorder(node->right);
	}
}
int main()
{
	root = NULL;
	bool flag = true;
	char ch;
	int data;
	while(1)
	{
		cout<<"************************************************************"<<endl;
		cout<<"Enter the action performed on Binary tree"<<endl;
		cout<<"a: For insert option"<<endl;
		cout<<"b: For pre-order traversal"<<endl;
		cout<<"c: For postorder traversal"<<endl;
		cout<<"d: For inorder traversal"<<endl;
		cout<<"x: to quit"<<endl;;
		cin>>ch;
		switch(ch)
		{
			case 'a':
			{
				cin>>data;
				root = insert(root, data);
				break;
			}
			case 'b':
			{
				preorder(root);
				cout<<endl;
				break;
			}
			case 'c':
			{
				postorder(root);
				cout<<endl;
				break;
			}
			case 'd':
			{
				inorder(root);
				cout<<endl;
				break;
			}
			default:
			{
				flag = false;
				break;
			}
		}
		if(!flag)
			break;
	}
	return 0;
}