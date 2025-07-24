#include<stdio.h>

int main() {
    int num,reversenumber=0,a;
    printf("enter the integer");
    scanf("%d",&num);
    while(num!=0){
        a=num%10;
        reversenumber=reversenumber*10+a;
        num=num/10;

    }
    printf("reverse number%d\n",reversenumber);
}