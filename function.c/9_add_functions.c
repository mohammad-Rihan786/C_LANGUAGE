#include<stdio.h> 
int sum(int ,int ,int ,int);
int main (){
    printf("\nthe sum is %d",sum(1,2,3,4));
     printf("\nthe sum is %d",sum(1,2,7,4));
      printf("\nthe sum is %d",sum(1,2,3,4));
    return 0;
}
int sum(int a,int b,int c,int d){
    int sum=a+b+c+d;
    return sum;
}