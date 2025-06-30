#include<stdio.h>
#include<stdlib.h>

struct stack{
     int size;
     int top;
     char *arr;
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
void push(struct stack *ptr,char val){
    if (isFull(ptr)){
        printf("stack overflow\n");
        
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
char pop(struct stack*ptr){
    if(isEmpty(ptr)){
        printf("stack underflow\n");
    }else{
        char val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int match(char a,char b){
    if(a=='{' && b=='}'){
        return 1;
    }
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
    return 0;
}
//function to check the multiple parenthesis matcihng
int MPM(char *exp){
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
    sp->top=-1;
    sp->size=100;
    sp->arr=(char *)malloc(sp->size *sizeof(char));
    for(int i=0;exp[i]!='\0';i++){
        if (exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(sp,exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
            if(isEmpty(sp)){
                return 0;
            }
            char popedchar=pop(sp);
            if(!match(popedchar,exp[i])){
                return 0;
            }
        }
    }
    if(isEmpty(sp)){
        return 1;
    }else{
        return 0;
    }

} 

int main(){
//    char *exp="{[()]}()";  balanced
   char *exp="({[)]}";  //unbalanced
    if(MPM(exp)){
        printf("the parentehsis is matched\n");
    }else{
        printf("the parentehsis is not matched\n");

    }

    return 0;
}