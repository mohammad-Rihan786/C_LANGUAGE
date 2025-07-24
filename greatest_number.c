#include<stdio.h>

int main() {
    int first, second, third;
    printf("please enter the first number:");
    scanf("%d",&first);
    printf("please enter the second number:");
    scanf("%d",&second);
    
    printf("please enter the third number:");
    scanf("%d",&third);

    if(first>second&&first>third){
        printf("%d is the greatest",first);
    } else if(second>third){
        printf("%dis the greatest ",second);
    } else{
        printf("%dis the greatest",third);
    }
    return 0;
}















    
    

    

