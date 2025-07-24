#include<stdio.h>

int main() {
int age;
printf("welcome to rto,\n please enter your age");
scanf("%d",&age); 
if(age <18){
    printf("you are eligible for license\n");
}else{
    printf("you are to young, please apply after your age 18,\n");
}
printf("your age is :%d" , age);
return 0;
}