#include<stdio.h>
int main() {
    int num,i,sum=0;
    printf("enter the integer ");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++){
        if (num%i==0){
            sum=sum+i;
        }
    }

     if(sum==num){
    printf("number is perfect%d",num);


    }else{
        printf("not perfect%d",num);
    }
    
    return 0;
}