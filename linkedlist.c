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
    return 0;
}