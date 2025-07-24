#include<stdio.h>

int main() {
    int num,sum=0;
    do{
     printf("please enter the number");
     scanf("%d",&num);
     if(num<0)continue;
     sum=sum+num;
    }while(num !=0);
    printf("the sum of all number is %d",sum);
    return 0;  
    

}