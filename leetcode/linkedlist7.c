// Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

// You should preserve the original relative order of the nodes in each of the two partitions.

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

struct Node *partition(struct Node *head,int x){
    struct Node *lnode=(struct Node *)malloc(sizeof(struct Node));
    struct Node *gnode=(struct Node *)malloc(sizeof(struct Node));
    lnode->next=NULL;
    lnode->data=0;
    gnode->next=NULL;
    gnode->data=0;
    struct Node *l=lnode;
    struct Node *g=gnode;
    while(head!=NULL){
        struct Node *temp=head;
        head=head->next;
        temp->next=NULL;
        if(temp->data<x){
            l->next=temp;
            l=l->next;
        }else{
            g->next=temp;
            g=g->next;
        }
    }
    l->next=gnode->next;
    g->next=NULL;
    struct Node *res=lnode->next;
    free(lnode);
    free(gnode);
    return res;

}




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

    first->data=4;
    first->next=second;

    second->data=3;
    second->next=third;

    third->data=2;
    third->next=fourth;

    fourth->data=1;
    fourth->next=NULL;
    printf("before partition\n");
    linkedlistrtaversal(head);
    head=partition(head,3);
    printf("after partition\n");
    linkedlistrtaversal(head);


    return 0;
}