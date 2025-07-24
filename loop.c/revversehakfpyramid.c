#include<stdio.h>
int main () {
    int i,j,r,rows;
     printf("enter the number of rows");
    scanf("%d",&rows);
    for (i=1;i<=rows;i++){
        printf("\n ");

        for(r=0;r<rows-i;r++){
            printf(" ");
        }
    
    for(j=1;j<=i;j++){
        printf("*");
    }
    }
}