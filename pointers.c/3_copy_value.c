#include<stdio.h>
int main () {
     int num=8;
     int *ptr=&num;
     printf("the  value of number is %d\n",num);
     *ptr=87 ;
     printf("the value of number is %d",num);

}