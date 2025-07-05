#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void lltraversal(struct Node *head){
    struct Node *ptr=head;
    while(ptr !=NULL){
        printf("elements:%d\n",ptr->data);
        ptr=ptr->next;
    }
     
}

struct Node *remove_nth_node_from_end(struct Node *head,int n){
    struct Node *dummy=(struct Node *)malloc(sizeof(struct Node));
    dummy->data=0;
    dummy->next=head;
    struct Node *f=dummy;
    struct Node *s=dummy;
    for(int i=0;i<=n;i++){
        f=f->next;
    }
    while(f!=NULL){
        f=f->next;
        s=s->next;
    }
    struct Node *temp=s->next;
    s->next=temp->next;
    free(temp);

    struct Node *newhead=dummy->next;
    free(dummy);
    return newhead;
}
int main()
{
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
    lltraversal(head);

    printf("after the deletion fo the nth node from the end\n");
    head=remove_nth_node_from_end(head,3);
    lltraversal(head);
    
    return 0;
}