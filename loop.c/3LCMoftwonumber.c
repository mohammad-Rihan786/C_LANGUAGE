#include<stdio.h>

int main () {

    int i,first, second;
    printf("enter the first number");
    scanf("%d",&first);
    printf("enter the second number");
    scanf("%d",&second);
    int min = first>second?first:second;
    int max = first*second;

    for(i=min;i<=max;i++){
        if (i%first==0&&i%second==0){
            printf("the lcm of %d and %d  is %d",first ,second,i);
        }
            return 0;
        }
    }