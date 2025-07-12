#include<stdio.h>
#include<stdlib.h>
struct CircularQueue{
    int size;
    int f;
    int r;
    int * arr;
};
int isfull(struct CircularQueue *q){
    if((q->r+1)%q->size==q->f){
        return 1;
    }else{
        return 0;
    }
}
int isempty(struct CircularQueue *q){
    if(q->f==q->r){
        return 1;
    }else{
        return 0;
    }
}
void enque(struct CircularQueue *q,int val){
    if(isfull(q)){
        printf("queue overflow\n");
    }else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
    }
}
int deque(struct CircularQueue *q){
    int a=-1;
    if(isempty(q)){
        printf("queue underflow\n");
    }else{
        q->f=(q->f+1)%q->size;
        q->arr[q->f]==a;
    }
    return a;
}

int main(){
    struct CircularQueue *q=(struct CircularQueue *)malloc(sizeof(struct CircularQueue));
    q->size=5;
    q->f=0;
    q->r=0;
    q->arr=(int *)malloc(sizeof(int));
    enque(q,5);
    enque(q,15);
    enque(q,25);
    enque(q,35);
    enque(q,45);
    enque(q,55);
    enque(q,65);
    printf("%d\n",q->arr[q->r]);
    if(isempty(q)){
        printf("is empty\n");
    }else{
        
        printf("isnot empty\n");
    }

    return 0;
}