#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};
void lltraversal(struct Node *head){
    struct Node *p=head;
    while(p->next!=NULL){
        printf("element:%d\n",p->data);
        p=p->next;
    }
}
int main(){
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;

    head=(struct Node *) malloc(sizeof(struct Node));
    first=(struct Node *) malloc(sizeof(struct Node));
    second=(struct Node *) malloc(sizeof(struct Node));
    third=(struct Node *) malloc(sizeof(struct Node));
    head->data=12;
    head->next=first;
    head->prev=NULL;
    first->data=24;
    first->next=second;
    first->prev=head;
    second->data=36;
    second->next=third;
    second->prev=first;
    third->data=12;
    third->next=NULL;
    third->prev=second;
    lltraversal(head);

    return 0;
}