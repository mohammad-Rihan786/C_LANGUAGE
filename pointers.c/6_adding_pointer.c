#include<stdio.h>
int main (){
    int num=50;
    int *p;
    p=&num;
    printf(" the value of pointer %d\n",p);
    p=p+3;
    printf(" the value of pointer after the addition %d",p);
}