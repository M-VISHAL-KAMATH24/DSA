#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int validAnagram(char *s1,char *s2){
    if (s1==NULL || s2==NULL){
        return 0;
    }
    if (strlen(s1)!=strlen(s2)){
        return 0;
    }
    int count[256]={0};
    int i=0;
    while (s1[i]!='\0'){
        count[(unsigned char) s1[i]]++;
        i++;
    }
    i=0;
    while(s2[i]!='\0'){
        count[(unsigned char) s2[i]]--;
        i++;
    }
    for(int i=0;i<256;i++){
        if (count[i]!=0) return 0;
    }
    return 1;
}
int main(){
    char s1[]="silent";
    char s2[]="listekn";
    if (validAnagram(s1,s2)){
        printf("valid\n");
    }else{
            printf("in valid\n");
    }

    return 0;
}