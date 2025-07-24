#include<stdio.h>

int main() {
    int age;
    printf("welcome to rto\n please enter your age:");
    scanf("%d",&age);
    
    if (age<18) {
    printf("you are too youn , please apply after age 18.\n");
    }else if(age >70) { 
        printf("you are senior, you can not apply anymore\n");
    }else{
        printf("you are eligible for a license.\n");
    }

    printf("your age is :%d",age);
        return 0;
    }
