#include<stdio.h>

int main () {


    int a,b;
    int choice;

    printf("enter your choice(1 for sum,2 for substraction,3 for multiplication,4 for division )");
    scanf("%d",&choice);
    printf("enter two number");
    scanf("%d%d",&a,&b);


    if (choice==1){
        printf("sum of two number is %d " , a+b);
    }else if (choice==2){
        printf("subdtraction of two number is %d", a-b);
    }else if (choice==3){

        printf("multiplication of two numberis %d",a*b);
    }else if (choice==4){

        printf("divisor of rwo number is %d", a/b);
    
    }
    return 0;
}