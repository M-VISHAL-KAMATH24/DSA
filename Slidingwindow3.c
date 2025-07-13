// Given a string s, find the length of the longest substring without duplicate characters.

#include<stdio.h>
#include<stdlib.h>
int lengthOfLongestSubstring(char* s) {
   if (s==0 ||s=='\0'){
    return 0;
   }
   int left=0;
   int maxlen=0;
   int store[128]={0};

   for(int right=0;s[right]!='\0';right++){
    if (store[s[right]]>0){
        left= (store[s[right]]>left) ? store[s[right]]:left;
    }
    store[s[right]]=right+1;
    int curlen=right-left+1;
    maxlen=(curlen>maxlen)?curlen:maxlen;
   }
   return maxlen;


}
int main(){
    char s[]="vishalvisha";
    printf("%d\n",lengthOfLongestSubstring(s));

    return 0;
}

