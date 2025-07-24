#include<stdio.h>

int main() {

    int first,second;
    printf("please enter the first number:");
    scanf("%d",&first);
     printf("now, enter the second number:");
    scanf("%d",&second );

    int max = second<first ? first : second;
    printf("minimum of two number is:%d",max); 

    
    
    return 0;
}