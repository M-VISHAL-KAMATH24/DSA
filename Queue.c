#include<stdio.h>
#include<stdlib.h>
struct Queue{
    int size;
    int f;
    int r;
    int * arr;
};
int isfull(struct Queue *q){
    if(q->r==q->size-1){
        return 1;
    }else{
        return 0;
    }
}
int isempty(struct Queue *q){
    if(q->f==q->r){
        return 1;
    }else{
        return 0;
    }
}
void enque(struct Queue *q,int val){
    if(isfull(q)){
        printf("queue overflow\n");
    }else{
        q->r=q->r+1;
        q->arr[q->r]=val;
    }
}
int deque(struct Queue *q){
    int a=-1;
    if(isempty(q)){
        printf("queue underflow\n");
    }else{
        q->f++;
        q->arr[q->f]==a;
    }
    return a;
}

int main(){
    struct Queue *q=(struct Queue *)malloc(sizeof(struct Queue));
    q->size=100;
    q->f=-1;
    q->r=-1;
    q->arr=(int *)malloc(sizeof(int));
    enque(q,5);
    printf("%d\n",q->arr[q->r]);
    
    deque(q);
    if(isempty(q)){
        printf("is empty\n");
    }else{
        
        printf("isnot empty\n");
    }

    return 0;
}