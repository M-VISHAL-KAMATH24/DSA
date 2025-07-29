#include<stdio.h>
int Fibonaci(int num){
    if (num==0){
        return 0;
    }
    else if (num==1){
        return 1;
    }else{
        return Fibonaci(num-1)+Fibonaci(num-2);
    }
}

int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    int result=Fibonaci(num);
    printf("%d is fibonaci of %d\n",result,num);
}