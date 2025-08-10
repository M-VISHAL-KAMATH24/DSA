#include<stdio.h>
#include<stdlib.h>
int countLength(char *str){
    if (!str) return 0;
    int count=0;
    while(str[count]!='\0'){
        count++;
    }
    return count;
}
int main(){
    char str[]="vishal";
    printf("the length of the string is %d",countLength(str));
    return 0;
}