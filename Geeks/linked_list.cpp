int LengthLinkedList(struct Node* head){
    if(head==NULL)
        return 0;
    else
        return 1+getCount(head->next);
}
void printLinkedList(struct Node *head)
{
   if(head==NULL)
        return;
    else{
        printf("%d ",head->data);
        display(head->next);
    }
    return;
}
//Get value at kth node assuming k <= length of Linked List
int GetNthNode(struct node* head, int k){
    if(k==1)
        return head->data;
    return GetNth(head->next,k-1);
}