#include<stdio.h>
int main (){
    int num=50;
    int *p;
    p=&num;
    printf(" the value of pointer  if %d \n",p);
    p=p-3;// in this logic size of int  is 4 and multiply by 3 thats way give output is 12 substraction  
    printf(" the value of pointer after substraction %d",p);
}