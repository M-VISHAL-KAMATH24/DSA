//list rotation by k places
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
struct Node *Rotate_LinkedList(struct Node *head,int k){
    if(head==NULL || k==0){
        return head;
    }
    struct Node *tail=head;
    int len=1;//initial lenght of the linked list considering there is only the head before traversing
    while(tail->next){
        tail=tail->next;
        len++;
    }
    //make the linked list circular for the easy rotation
    tail->next=head;
    //check if k is too larhe
    k=k%len;
    int steps_to_take=len-k;
    struct Node *newtail=head;
    for(int i=1;i<steps_to_take;i++){
        newtail=newtail->next;
    }
    struct Node *newhead=newtail->next;
    newtail->next=NULL;
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
    printf("before the rotation\n");
    lltraversal(head);
    head=Rotate_LinkedList(head,12);
    printf("after the rotation\n");
    lltraversal(head);

    return 0;
}