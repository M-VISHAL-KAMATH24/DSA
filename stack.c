#include<stdio.h>
#include<stdlib.h>

struct stack{
     int size;
     int top;
     int *arr;
};
int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    return 0;
}
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return 0;
}
void push(struct stack *ptr,int val){
    if (isFull(ptr)){
        printf("stack overflow\n");
        
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack*ptr){
    if(isEmpty(ptr)){
        printf("stack underflow\n");
    }else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct stack *p,int i){
    int arryind=p->top-i+1;
    if(arryind <0){
        printf("not valid position stack\n");
        return 1;
    }else{
        return p->arr[arryind];
    }
}
int main(){
    struct stack *s;//structure pointer
    s=(struct stack *)malloc(sizeof(struct stack));
    s->size=80;
    s->top=-1;
    s->arr=(int *)malloc(s->size * sizeof(int));
    push(s,56);
    push(s,46);
    push(s,36);
    push(s,26);
    push(s,16);
    push(s,6);
    printf("%d\n",s->arr[s->top]);
    if(isEmpty(s)){
        printf("the stack is empty\n");

    }else{
        printf("the stack is not empty\n");

    }
    for(int j=1;j  <= s->top+1;j++){
        printf("%d me hai %d\n",j,peek(s,j));
    }
   

    return 0;
}