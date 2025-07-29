#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
bool isAnagram(char *s,char *t){
    if(strlen(s)==0 || strlen(t)==0){
        return false;
    }
    if(strlen(s)!=strlen(t)){
        return false;
    }
    int count[26]={0};
    for(int i=0;i<strlen(s);i++){
        count[s[i] - 'a']++;
    }
    for(int j=0;j<strlen(t);j++){
        count[t[j]- 'a']--;
    }
    for(int i=0;i<26;i++){
        if (count[i]!=0){
            return false;
        }
        return true;
    }
}

int main(){
    char *s="vihsu";
    char *t="vish1u";
    if (isAnagram(s,t)){
        printf("is anagram\n");
    }else{
        printf("is not an anagram\n");
    }

    return 0;
}