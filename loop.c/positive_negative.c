#include<stdio.h>

int main () {
    int a;
    int const pi=3.141558;

    printf("enter the number");

    scanf("%d",&a);
    if (a>0){
       
        printf("the number is positive");
        printf("the area of circle %d is ",pi*a*a);
    }else if(a<0){
        printf("the number is negative\n");
        printf("area of square is %d ",a*a);
    }

        
    




    return 0;
}