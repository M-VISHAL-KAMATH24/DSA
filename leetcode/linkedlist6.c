//checking if the list has the cycle.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool has_cycle(struct Node *head){
    if(head==NULL || head->next==NULL){
        //if only head is there or the list is empty
        return false;
    }
    struct Node *fast=head;
    struct Node *slow=head;
    while(fast!=NULL && fast->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}




void isEmpty(struct Node *head){
    struct Node *ptr=head;
    if(ptr==NULL){
        printf("linked list is empty");
    }
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

    first->data=2;
    first->next=second;

    second->data=3;
    second->next=third;

    third->data=4;
    third->next=fourth;

    fourth->data=5;
    fourth->next=second;

    if (has_cycle(head)){
        printf("the linked list has the cycle\n");
    }else{
        printf("the linked list has no  cycle\n");
    }
    

    return 0;
}