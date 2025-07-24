#include<stdio.h>

int main () {
    int a=0,b=1,num,i,next;
    printf("enter the number ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        next=a+b;
        a=b;
        b=next;
         printf("%d\n",a );

    }

    printf("\n");
}