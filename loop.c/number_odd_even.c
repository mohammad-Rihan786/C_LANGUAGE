#include<stdio.h>

int main() {

    int number;
    printf("please enter the number:");
    scanf("%d",&number);

    if (number %2==0) {
    printf("the number is even:");
    }else{
        printf("the number is odd:");
    }
    return 0;
}
