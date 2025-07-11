#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int *arr;
};
int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    return 0;
}
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return 0;

}
void push(struct stack *ptr,int val){
    if(isfull(ptr)){
        printf("stack overflow\n");
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("stack underflow\n");
    }else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct stack *ptr,int i){
    int arrind=ptr->top-i+1;
    if(arrind<0){
        printf("not valid poistion\n");
        return 0;
    }else{
        return ptr->arr[arrind];
    }
}

int main(){
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=100;
    s->arr=(int *)malloc(s->size *sizeof(int));
    push(s,56);
    push(s,46);
   push(s,36);
    push(s,26);
    push(s,16);
    push(s,6);
    pop(s);

    for(int j=1;j<=s->top+1;j++){
        printf("%d is in %d position\n",peek(s,j),j);
    }


    return 0;
}
