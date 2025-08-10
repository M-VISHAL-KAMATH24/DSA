#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h>
#include<string.h>
bool isPalindrome(char s[]){
int left=0;
int right=strlen(s)-1;
while(left<right){
    while(left<right && !isalnum(s[left])) left++;
    while(left<right && !isalnum(s[right])) right--;
    if(tolower(s[left]) !=towlower(s[right])) return false;
    left++;
    right--;
}
return true;
}
int main(){
    char str[100];
    printf("enter te string\n");
    scanf("%s",str);
    if (isPalindrome(str)){
        printf("the string is the palindrome\n");
    }else{
        printf("the string is not the palindrome\n");
    }

    return 0;
}
