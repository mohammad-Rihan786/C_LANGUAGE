#include<stdio.h>

int main () {
    int sum=0,i;
        int value[5];
        for(i=1;i<5;i++){
        printf("enter the value");
        scanf("%d",&value[i]);
         sum=sum+value[i];
    }
    printf("%d",sum);
    }
