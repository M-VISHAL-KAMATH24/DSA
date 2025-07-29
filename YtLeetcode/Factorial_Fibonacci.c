#include<stdio.h>
#include<stdlib.h>

int Fibonacci(int num){
    if (num==0){
        return 0;
    }
    else if(num==1){
        return 1;
    }else{
        return Fibonacci(num-1)+Fibonacci(num-2);
    }
}

int Factorial(int num){
    if(num==0||num==1){
        return 1;
    }else{
        return num*Factorial(num-1);
    }
}

int main(){
    int num;
    printf("enter the number you want to find the fibonacci and fibonaci\n");
    scanf("%d",&num);
    for (int i=0;i<=num;i++){
        printf("%d ",Fibonacci(i));
    }
    printf("\n");
    printf("the factorial of %d is %d ",num,Factorial(num));

    return 0;
}