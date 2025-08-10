#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void removeDupCharecters(char *s){
    int writeIndex=1;
    int len=strlen(s)-1;
    int seen[256]={0};
    seen[(unsigned char)s[0]]=1;
    for(int readindex=1;readindex<=len;readindex++){
        if (!seen[(unsigned char)s[readindex]]){
            s[writeIndex]=s[readindex];
            seen[(unsigned char) s[readindex]]=1;
            writeIndex++;
        }
    }
    s[writeIndex]='\0';

}
int main(){
char s[]="madarchod";
printf("%s\n",s);
removeDupCharecters(s);
printf("%s\n",s);
return 0;
}