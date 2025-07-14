// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

// A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool is_Subsequence(char *a,char *b){
    int i=0;
    int j=0;
    while (a[i]!='\0' && b[j] !='\0'){
        if(a[i]==b[j]){
            i++;
        }
        j++;
    }
    return a[i]=='\0';

}

int main(){
    char *a="ace";
    char *b="abede";
    if (is_Subsequence(a,b)){
        printf("%s is the susequence of %s\n",a,b);
    }else{
        printf("%s is  not the susequence of %s\n",a,b);

    }

    return 0;
}