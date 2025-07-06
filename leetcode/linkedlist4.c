//Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.


#include<stdio.h>
#include<stdlib.h>

struct Node
{
        int data;
        struct Node* next;
};

void linkedlistrtaversal(struct Node *ptr){
    while(ptr!=NULL){
        printf("elements:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

//function for the reversal
struct Node *reversal_ll(struct Node *head, int left ,int right){
    if(head==NULL || left==right){
        return head;
    }
    struct Node *dummy=(struct Node *)malloc(sizeof(struct Node));
    dummy->next=head;
    struct Node *prev=dummy;
    for(int i=1;i<left;i++){
        prev=prev->next;
    }
    struct Node *cur=prev->next;
    struct Node *newnode;
    for(int i=0;i<right-left;i++){
        newnode=cur->next;
        cur->next=newnode->next;
        newnode->next=prev->next;
        prev->next=newnode;
        
    }
    return dummy->next;

}
           

void isEmpty(struct Node *head){
    struct Node *ptr=head;
    if(ptr==NULL){
        printf("linked list is empty");
    }
}

//function for the reversal

int main(){
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head=(struct Node *)malloc(sizeof(struct Node));
    first=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    
    head->data=1;
    head->next=first;

    first->data=2;
    first->next=second;

    second->data=3;
    second->next=third;

    third->data=4;
    third->next=fourth;

    fourth->data=5;
    fourth->next=NULL;

    printf("before the reversal\n");
    printf("after the reversal\n");   
    linkedlistrtaversal(head);
    printf("after the reversal\n");   
    head=reversal_ll(head,2,4);
    linkedlistrtaversal(head);
    

    return 0;
}