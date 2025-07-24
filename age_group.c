#include<stdio.h>

int main() {
    int age;
    printf("please enter your age:");
    scanf("%d",&age);
    if(age<13){
        printf("you are children:");
    }else if (age<20){
        printf("you are teen:");
    }else if(age<60){
        printf("you are adult:");
    }else{
        printf("you are senior:");
    }
    return 0;
}