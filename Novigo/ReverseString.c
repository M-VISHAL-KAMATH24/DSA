#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char s[]){
    int left=0;
    int right=strlen(s)-1;
    int temp;
    while(left<right){
        temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
    }
}
void reverseWithoutTemp(char s[]){
    int left=0;
    int right=strlen(s)-1;
    while(left<right){
       s[left]^=s[right];
       s[right]^=s[left];
       s[left]^=s[right];
       left++;
       right--;

    }

}

int main(){
    char s[100];
    printf("enter the string\n");
    scanf("%s",s);
    reverse(s);
    printf("%s\n",s);
    reverseWithoutTemp(s);
    printf("%s\n",s);

}