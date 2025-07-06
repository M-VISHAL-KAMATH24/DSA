//merge the two sorted linked lists


#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode* next;
};
//function for the linked list traversal
void lltraversal(struct ListNode *head){
    struct ListNode *p=head;
    while(p!=NULL){
        printf("elements are:%d \n",p->val);
        p=p->next;
    }
}

// Function to create a new node
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Function to create a linked list
struct ListNode* createList(int arr[], int size) {
    if (size == 0) return NULL;
    
    struct ListNode* head = createNode(arr[0]);
    struct ListNode* current = head;
    
    for (int i = 1; i < size; i++) {
        current->next = createNode(arr[i]);
        current = current->next;
    }
    
    return head;
}
//function to merge the linked lists
struct ListNode *mergell(struct ListNode *list1,struct ListNode *list2){
    if(list1 == NULL){
         return list2;
    } 
    if(list2 == NULL){
         return list1;
    } 
    struct ListNode *dummy=(struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *cur=dummy;
    while(list1!=NULL && list2!=NULL){
        if(list1->val<= list2->val){
            cur->next=list1;
            list1=list1->next;
        }else{
            cur->next=list2;
            list2=list2->next;
        }
        cur=cur->next;
        if(list1!=NULL){
            cur->next=list1;
        }
        if(list2!=NULL){
            cur->next=list2;
        }

    }
    return dummy->next;

}

int main() {
    // Create first linked list: 1->2->4
    int arr1[] = {1, 2, 4};
    struct ListNode* list1 = createList(arr1, 3);
    
    // Create second linked list: 1->3->4
    int arr2[] = {1, 3, 4};
    struct ListNode* list2 = createList(arr2, 3);

    printf("LIST 1\n");
    lltraversal(list1);
    
    printf("****************\n");
    printf("LIST 2\n");
    lltraversal(list2);
    printf("****************\n");
    printf("MERGED LINKED LIST\n");
    list1=mergell(list1,list2);
    lltraversal(list1);


    
   return 0;
}