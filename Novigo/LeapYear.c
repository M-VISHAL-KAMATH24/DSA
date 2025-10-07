#include<stdio.h>
#include<stdlib.h>
//leap yr is when number is  divisible by 4 and not by 100 or by 400 it should be divible
void isLeapYear(int year){
    if((year%4==0 &&year%100 !=0)||(year%400==0)){
        printf("%d is leap year\n",year);
    }else{
        printf("%d is not a leap year\n",year);
    }
}
int main(){
    int year=2024;
    isLeapYear(year);
    return 0;
}