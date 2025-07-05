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

struct Node *remove_redudancy(struct Node *head){
    struct Node *dummy=(struct Node *)malloc(sizeof(struct Node));
    dummy->data=0;
    dummy->next=head;
    struct Node *cur=dummy->next;
    struct Node *prev=dummy;
    while(cur!=NULL && cur->next!=NULL){
        if(cur->data == cur->next->data){
            int duplicate_value=cur->data;
            while(cur!=NULL && cur->data==duplicate_value){
                struct Node *temp=cur;
                cur=cur->next;
                free(temp);
            }
            prev->next=cur;
        }else{
            prev=cur;
            cur=cur->next;
        }
    }
    struct Node *newhead=dummy->next;
    free(dummy);
    return newhead;
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

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=NULL;

    printf("before the removal of the redudancy\n");
    linkedlistrtaversal(head);

    head=remove_redudancy(head);
    printf("after the removal of the redudancy\n");
    linkedlistrtaversal(head);
    isEmpty(head);

    return 0;
}