#include<stdio.h>

int main() {
    int num,reversenumber=0,originalnum,a;
    printf("enter the integer");
    scanf("%d",&num);
    originalnum=num;
    while(num!=0){
        a=num%10;
        reversenumber=reversenumber*10+a;
        
        num=num/10;

    }
    if (originalnum==reversenumber){
        printf("the number %d is palindrome",originalnum);
    }else{
        printf("the number %d is not palindrome",originalnum);
    }
     
}