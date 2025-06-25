#include<stdio.h>
#include<stdlib.h>

struct Node
{
        int data;
        struct Node* next;
};
void lltraversal(struct Node *head){
    struct Node *ptr=head;
    do{
        printf("element is %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
struct Node *insertAtFront(struct Node *head,int data){
    struct Node *ptr=(struct Node *) malloc(sizeof(struct Node));
    struct Node *p=head;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    ptr->data=data;
    head=ptr;
    return head;
}
int main(){
     struct Node * head;
    struct Node * second;
    struct Node * third;

    //allocate memory in heap
    head=(struct Node *)malloc(sizeof(struct Node));   
    third=(struct Node *)malloc(sizeof(struct Node));  
    second=(struct Node *)malloc(sizeof(struct Node));
    
    head->data=7;
    head->next=second;
    second->data=8;
    second->next=third;
    third->data=99;
    third->next=head;
    lltraversal(head);
    head=insertAtFront(head,88);
    printf("after the insertion at the front\n");
    lltraversal(head);
    return 0;
}