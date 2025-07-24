#include<stdio.h>
int main (){
    int num,i,fact=1;
    printf("enter the number");
    scanf("%d",&num);
     if(num<0){
        printf("factorial is not defined for negarive number");
    }else{
    for(i=1;i<=num;i++){
    fact=fact*i;
    }
    }
    printf("factorial of %d\n=%d",num,fact);
return 0;
}




