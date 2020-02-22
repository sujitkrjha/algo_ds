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
//Insert a new node with value val at the end of the linked list.
nodePtr insertEnd(nodePtr root, int val)
{
	if(root == NULL)
		return newNode(root, val);
	else
		root->next = insertEnd(root->next,val);
	return root;
}
//Print linked list from start to end.
void printList(nodePtr root)
{
	if(root == NULL)
		return;
	else
		printList(root->next);
}
int main()
{
	nodePtr root = NULL;
	int t,val;
	do
	{
		cout<<"Select the action to be performed:"<<endl;
		cout<<"Enter 1 to add element at end."<<endl;
		cout<<"Enter 2 to print linked list."<<endl;
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
				cout<<"Linked list: ";
				printList(root);
				cout<<endl;
				break;
			}
			default:
			{
				cout<<"Exiting program"<<endl;
				break;
			}
		}
	}while(t == 1 || t==2);
	return 0;
}
