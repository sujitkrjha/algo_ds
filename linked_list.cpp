#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

struct node{
	int data;
	struct node * next;
};
typedef struct node * nodePtr;
//Creates a linked list node with value = val.
nodePtr newNode(nodePtr root, int val)
{
	nodePtr temp = new node();
	temp->data = val;
	temp->next = NULL;
	cout<<temp->data<<endl;
	return temp;
}
//Insert a new node with value = val, at the end of linked list.
nodePtr insertEnd(nodePtr root, int val)
{
	if(root == NULL)
		return newNode(root, val);
	else
		root->next = insertEnd(root->next,val);
	return root;
}
//Insert a new node with value = val, at the start of linked list.
nodePtr insertBeggining(nodePtr root, int val)
{
	if(root == NULL)
		return newNode(root, val);
	else
	{
		nodePtr temp = new node();
		temp = newNode(temp, val);
		temp->next = root;
		root = temp;
		return root;
	}

}
nodePtr insertAtPosition(nodePtr root, int val, int pos)
{
	if(pos == 0)
	{
		nodePtr temp = new node();
		temp = newNode(temp, val);
		
	}
}
//Print linked list from start to end.
void printList(nodePtr root)
{
	if(root == NULL)
		return;
	else
	{
		cout<<root->data<<" ";
		printList(root->next);
	}
}
int lengthLinkedLIst(nodePtr root)
{
	if (root == NULL)
		return 0;
	else
	{
		int length = lengthLinkedLIst(root->next) + 1;
		return length;
	}
}
int main()
{
	nodePtr root =new node();
	root = NULL;
	int t,val,pos;
	do
	{
		cout<<"******************Select the action to be performed*************************"<<endl;
		cout<<"1) Add element at end."<<endl;
		cout<<"2) Add element at beggining."<<endl;
		cout<<"3) Print linked list."<<endl;
		cout<<"4) Print length of linked list."<<endl;
		cout<<"Enter other to exit from program."<<endl;
		cin>>t;
		switch(t)
		{
			case(1):
			{
				cout<<"Enter the number to insert at end: ";
				cin>>val;
				root = insertEnd(root, val);
				break;
			}
			case(2):
			{
				cout<<"Enter the number to insert at beggining: ";
				cin>>val;
				root = insertBeggining(root, val);
				break;
			}
			case(3):
			{
				cout<<"Linked list: ";
				printList(root);
				cout<<endl;
				break;
			}
			case(4):
			{
				cout<<"Length of linked list is: "<<lengthLinkedLIst(root)<<endl;
				break;
			}
			case(4):
			{
				cout<<"Position of insertion: ";
				cin>>pos;
				cout<<"Enter the number to be inserted: ";
				cin>>val;
				if(pos > lengthLinkedLIst(root) || pos < 1)
					cout<<"Error: position entered is out of range"<<endl;
				else
					root = insertAtPosition(root,val,pos);
				break;
			}
			default:
			{
				cout<<"Exiting program"<<endl;
				break;
			}
		}
	}while(t>0 && t<5);
	return 0;
}
