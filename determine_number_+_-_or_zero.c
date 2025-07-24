#include<stdio.h>

int main() {

    int number;
    printf("please enter the number:");
    scanf("%d",&number);

    if (number  >0){
        printf("the number is positive:");
    } else if (number<0){ 
        printf("the number is negative:");
    }else{
        printf("\nthe number is zero:");
    }
    return 0;
}





    

    

