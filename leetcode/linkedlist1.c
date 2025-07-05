 //Remove Nth Node From End of List



 //here i have created an dummy node pointing at the head and it acts as an temporary head node
 //maintained two pinters initailly pointing to the head
 //move fast pointer n times ahead and then move both pointers until fast reaches NUll
 //remove the node next to the slow pointer
 //remove the dummy head node and return head
 #include<stdio.h>
 #include<stdlib.h>

 //create a linked list
 struct Node{
    int data;
    struct Node *next;
 };
 //traversal
 void lltraversal(struct Node *head){
    struct Node *ptr=head;
    for(int i=0;ptr!=NULL;i++){
        printf("element :%d\n",ptr->data);
        ptr=ptr->next;
    }
 }
 //function to remove the ntrh node from the end
 struct Node *remove_nthnode_from_end(struct Node *head,int n){
     //create an new head node
     struct Node *dummy=(struct Node *)malloc(sizeof(struct Node));
     dummy->data=0;
     dummy->next=head;
     struct Node *fast=dummy;
     struct Node *slow=dummy;
     //move the fast pointer n ahead
     for(int i=0;i<=n;i++){
        fast=fast->next;
     }
     while(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
     }
     //remove the node where slow->next is pointing
     struct Node *ptr=slow->next;//pointing to the node that is to be removed
     slow->next=ptr->next; //connect the link of slow and the next node after the node that is being removed
     free(ptr);

     //return the new head 
     struct Node *newhead=dummy->next;
     free(dummy);
     return newhead;

 }


 int main(){
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head=(struct Node *) malloc(sizeof(struct Node));
    first=(struct Node *) malloc(sizeof(struct Node));
    second=(struct Node *) malloc(sizeof(struct Node));
    third=(struct Node *) malloc(sizeof(struct Node));
    fourth=(struct Node *) malloc(sizeof(struct Node));
    head->data=15;
    head->next=first;

    first->data=25;
    first->next=second;

    second->data=35;
    second->next=third;

    third->data=45;
    third->next=fourth;

    fourth->data=55;
    fourth->next=NULL;
    lltraversal(head);
    head=remove_nthnode_from_end(head,3);
    printf("after the removal of the nth node from the end\n");
    lltraversal(head);

    return 0;
 }