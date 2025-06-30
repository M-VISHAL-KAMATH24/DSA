#include<stdio.h>
#include<stdlib.h>

//stack using linked list
struct Node {
    int data;
    struct Node *next;
};
    struct Node *top=NULL;//indicating the stack is empty

//function for ll traversal
void lltraversal(struct Node *n){
    while(n!=NULL){
        printf("element in stack:%d\n",n->data);
        n=n->next;
    }
}
//fuction to check is the stack full
int Isfull(struct Node *top){
    struct Node *ptr=(struct Node *)
malloc(sizeof(struct Node ));
if(ptr==NULL){
    return 1;
}else{
    return 0;
}

}
//fucntion to check the stack is empty
int isempty(struct Node *top){
    if(top==NULL){
        printf("stack is empty\n");
        return 1;
    }else{
        return 0;
    }
}
//function to push an element into the stack
struct Node *push(struct Node *top,int val){
    if(Isfull(top)){
        printf("stack overflow\n");
    }else{
        struct Node *n=(struct Node *)malloc(sizeof(struct Node));
        n->data=val;
        n->next=top;
        top=n;
        return top;

    }
}
//function to pop the leement
int pop(struct Node *tp){
    if (isempty(tp)){
        printf("the stack is empty\n");
    }else{
        struct Node *q=tp;
        top=tp->next;
        int x=q->data;
        free(q);
        return x;

    }

}
//function for peak()
int peek(struct Node *top,int pos){
    struct Node *ptr=top;
    for(int i=0;i<pos-1 && ptr !=NULL ;i++){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }else{
        return -1;
    }
}
//function for the stacktop
int stacktop(struct Node *top){
    if (isempty(top)){
        return -1;
    }else{
        return top->data;
    }
}
//function for the stackbottom
int stackbottom(struct Node *top){
    if (isempty(top)){
        return -1;
    }else{
        struct Node *ptr=top;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        return ptr->data;
    }
}
int main(){
    top=push(top,21);
    top=push(top,22);
    top=push(top,23);
    lltraversal(top);
    // int u=pop(top);
    // printf("%d is popped\n",u);
    lltraversal(top);
    int a=peek(top,2);
    printf("%d is reslt of peek\n",a);

    for(int x=1;x<=3;x++){
        printf("the element %d is in %d posistion\n",peek(top,x),x);
    }
    int k=stacktop(top);
    printf("%d is the stack top\n",k);
    int r=stackbottom(top);
    printf("%d is the stack bottom\n",r);
    return 0;
}
