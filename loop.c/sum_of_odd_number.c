#include<stdio.h>

int main () {
    int num;
    printf("\nwelcome to sum odd number:");
    printf("please enter hte number:");
    scanf("%d",&num);
    int i=1;
    int sum=0;
    while (i<=num) {
        sum +=i;
        i += 2;
    }
    printf("the sum of all odd number from 1 to %d is %d",num,sum);

    return 0;

}