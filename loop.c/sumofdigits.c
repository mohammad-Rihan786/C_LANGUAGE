#include<stdio.h>

int main () {
    int num;
    printf("enter the sum of digits");
    scanf("%d",&num);

    int sum=0;
    while(num>0){
        sum+=num%10;
        num = num/10;

    }
    printf("sum of digits is %d",sum,num);
}