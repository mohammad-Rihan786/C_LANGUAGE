#include<stdio.h>
void add(int*num1,int*num2,int*sum){
     *sum = *num1+*num2;
}
int main (){


int a,b,result;
int*ptr1=&a;
int*ptr2=&b;
int *sum=&result;
printf("please enter the number ");
scanf("%d", ptr1);
printf("now, enter the second numbwer ");
scanf("%d",ptr2);
add(ptr1,ptr2,sum);
printf(" the result of two number %d and %d is %d" , *ptr1,*ptr2,*sum);
return 0;
}