#include<stdio.h>
int main () {
    int i,j,r,row;
    printf("enter the number of rows");
    scanf("%d",&row);   
    for(i=row;i>=1;i--){
         for(r=1;r<=row-i;r++){
            printf(" ");
         }
    for(j=1;j<=(2*i-1);j++){
        printf("*");
    }  
    printf("\n");
    }  
    return 0;
}