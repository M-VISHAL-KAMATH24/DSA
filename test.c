#include<stdio.h>
#include<stdlib.h>

//stack
struct stack{
    int top;
    int size;
    int *arr;
};
//fucntion check is the stakc is empty
int Isempty(struct stack *p){
    if(p->top == -1){
        printf("the stack is empty\n");
        return 1;
    }
    return 0;
}
//fucntion to check the stack is full
int Isfull(struct stack *p){
    if(p->top == p->size-1){
        printf("the stack is full\n");
        return 1;
    }
    return 0;
}
//function to push an element in the stack
void push(struct stack *s,int val ){
    if (Isfull(s)){
        printf("stack overflow,cannot add %d in the stack\n",val);
    }else{
    s->top++;
    s->arr[s->top]=val;
    printf("%d is added into the stack\n",val);
    }
}
//fucntion to pop the element
int pop(struct stack *s){
    if (Isempty(s)){
        printf("the stack underflow is occrued");
        return -1;
    }else{
        int value=s->arr[s->top];
        s->top--;
        return value;
    }
}
//function for peek()
int peek(struct stack *s,int i){
    int arrpos=s->top-i+1;
    if (arrpos<0){
        printf("invalid position\n");
        return -1;
    }else{
        return s->arr[s->top-i+1];

    }
}
int stacktop(struct stack*s){
    if (Isempty(s)){
        printf("the stack is empty\n");
        return -1;
    }else{
        return (s->arr[s->top]);
    }
}
int stackbottom(struct stack *s){
     if (Isempty(s)){
        printf("the stack is empty\n");
        return -1;
    }else{
        return (s->arr[0]);
    }
}
int main(){
    struct stack *s;
    //dynamic memory allocation
    s=(struct stack *)malloc(sizeof(struct stack));
    s->size=6;
    s->top=-1;
    s->arr=(int *)malloc(s->size * sizeof(int));
    push(s,55);
    push(s,45);
    push(s,95);
    push(s,80085);
//     int n=5;
//     int num;
//     for(int x=0;x<=n;x++){
//         if(Isfull(s)){
// printf("full");

//         }else{
//         printf("enter the number to push\n");
//         scanf("%d\n",&num);
//         push(s,num);
//     }
// }
    printf("%d is the head\n",s->arr[s->top]);
    // int a=pop(s);
    // printf("%d is poped from the stack\n",a);
    // int b=peek(s,2);
    // printf("%d is under the radar\n",b);
    for(int i=1;i<= s->top+1;i++){
        printf("%d is in %d and is in radar\n",peek(s,i),i);
    }
    int r=stacktop(s);
    printf("the stack top is %d\n",r);
    int r1=stackbottom(s);
    printf("the stack bottom is %d\n",r1);


    return 0;
}