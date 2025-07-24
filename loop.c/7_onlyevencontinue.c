#include<stdio.h>

int main() {
    int num,i,max;
    
     printf("please enter the number");
     scanf("%d",&max);
     for(i=1;i<=max;i++){
        if(i%2==0){
        continue;
        printf("%d\n",max);
     }
    return 0;
}
}
    

