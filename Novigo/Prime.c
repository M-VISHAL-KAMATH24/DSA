#include<stdio.h>
#include<stdlib.h>

int isPrime(int num){
    if (num<=1){
        return 0;
    }
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
        if (isPrime(num)){
        printf("is prime\n");
    }else{
        printf("is not prime\n");

    }

    return 0;
}