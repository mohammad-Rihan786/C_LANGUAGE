#include<stdio.h>

int main () {
    int num ,i,sum=0;
    printf("enter the number :");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++){
        if(i%2==1){
            sum=sum+i;
            printf("%d\n",sum);
        }
    }
}