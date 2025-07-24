#include<stdio.h> 
int square(int );// prototype 
int main (){
    int num;
    printf("\nplease  enter the number ");
    scanf("%d",&num);
    printf("the squre of number %d is %d",num,square(num));//calling of function 

    
    return 0;
}
int square(int num){// this is defination 
    return num*num;
}