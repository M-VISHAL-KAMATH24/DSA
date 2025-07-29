// A last bonus question to create an linked list

#include<stdio.h>
#include<stdlib.h>
//lets make the structure of linked list
struct Node{
    int data;
    struct Node *next;
};
//lets traverse the linked list
void lltraversal(struct Node *head){
    struct Node *ptr=head;
    while(ptr!=NULL){
        printf("elements of linked list:%d\n",ptr->data);
        ptr=ptr->next;
    }
}

int main(){
    struct Node *head;
    struct Node *first;
    struct Node *second;
    head=(struct Node *)malloc(sizeof(struct Node));
    first=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    head->data=10;
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=NULL;
    lltraversal(head);

    return 0;
}

// thankyou soo much . please like share and subsribe and stay tuned .lets meet tommorow.byebye goodnight thankyou