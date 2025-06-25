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

//insert at the beginig 
struct Node *InsertAtBegining(struct Node *head,int data){
    struct Node *p=(struct Node *)malloc(sizeof(struct Node *));
    p->next=head;
    p->data=data;
    return p;
}
struct Node *InsertAtIndex(struct Node *head,int data,int index){
    struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
    struct Node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr-> next=p->next;
    p->next=ptr;
    return head;

}

struct Node *InsertAtEnd(struct Node *head,int data){
    struct Node *ptr=(struct Node*) malloc(sizeof(struct Node));
    struct Node *p=head;
    while(p->next !=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->data=data;
    ptr->next=NULL;
    return head;
}

struct Node *InsertAtNode(struct Node *head,struct Node *prevnode,int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head;
}
struct Node *DeleteAtFirst(struct Node *head){
    struct Node *p=head;
    head=head->next;
    free(p);
    return head;
}

struct Node *DeleteAtIndex(struct Node *head,int index){
    struct Node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    struct Node *q=p->next;
    p->next=q->next;
    free(q);
    return head;
}

struct Node *DeleteAtEnd(struct Node *head){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
struct Node *deleteatvalue(struct Node *head,int value){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->data!=value && q->next !=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
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
    third->next=NULL;
    linkedlistrtaversal(head);
    printf("after insertion at begeing\n");
    head=InsertAtBegining(head,55);
    linkedlistrtaversal(head);
    printf("after insertion at between\n");
    head=InsertAtIndex(head,45,3);
    linkedlistrtaversal(head);
    printf("after insertion at end\n");
    head=InsertAtEnd(head,666);
    linkedlistrtaversal(head);
    printf("after insertion at node\n");
    head=InsertAtNode(head,third,80085);
    linkedlistrtaversal(head);
    printf("after deleting the head\n");
    head=DeleteAtFirst(head);
    linkedlistrtaversal(head);
    printf("after deleting at the index\n");
    head=DeleteAtIndex(head,3);
    linkedlistrtaversal(head);
    printf("after deleting at the end\n"); 
    head=DeleteAtEnd(head);
    linkedlistrtaversal(head);
    printf("after deleting at the given value\n"); 
    head=deleteatvalue(head,45);
    
    linkedlistrtaversal(head);
    return 0;
}