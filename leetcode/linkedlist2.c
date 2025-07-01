//remove the duplicates from the sorted linked list allowing only the distinct element

#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};

void lltraversal(struct Node *head){
    struct Node *p=head;
    while(p!=NULL){
        printf("element:%d\n",p->data);
        p=p->next;
    }
}
//function to remove the reductant element from the linked list (sorted) adn display only the distinct elemenet

struct Node *remove_redudant(struct Node *head){
    struct Node *dummy=(struct Node *)malloc(sizeof(struct Node));
    dummy->next=head;
    dummy->data=0;
    struct Node *cur=head;
    struct Node *prev=dummy;
    while(cur!=NULL && cur->next!=NULL){
        if(cur->data==cur->next->data){
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


int main(){
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    struct Node *sixth;
    struct Node *seventh;

    head=(struct Node *)malloc(sizeof(struct Node));
    first=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    fifth=(struct Node *)malloc(sizeof(struct Node));
    sixth=(struct Node *)malloc(sizeof(struct Node));
    seventh=(struct Node *)malloc(sizeof(struct Node));

    head->data=1;
    head->next=first;

    first->data=2;
    first->next=second;

    second->data=3;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=3;
    fourth->next=fifth;

    fifth->next=sixth;
    fifth->data=4;

    sixth->data=5;
    sixth->next=seventh;

    seventh->data=5;
    seventh->next=NULL;

    lltraversal(head);
    printf("after removing the redudant element\n");
    head=remove_redudant(head);
    lltraversal(head);
    return 0;
}