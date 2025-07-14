// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<ctype.h> //for isalnum
#include<string.h>//for strlen
bool isPalindrome(char *s){
    int left=0;
    int right=strlen(s)-1;
    while(left <right){
           
        while (left<right && !isalnum(s[left]) ) left++;
        while (left<right && !isalnum(s[right])) right --;
        if (tolower(s[left]) != tolower(s[right])) return false;
        left++;
        right--;
    }
    return true;
}

void print_output(char *s){
    if   (isPalindrome(s)){
    printf("%s is palindrome\n",s);
 }else{
    printf("%s is not an palindorme\n",s);
 }
}

int main(){
    char *a= "ababa";
    char *b= "A man, a plan, a canal: Panama";
    char *c="abc";
    print_output(a);
    print_output(b);
    print_output(c);

    return 0;
}