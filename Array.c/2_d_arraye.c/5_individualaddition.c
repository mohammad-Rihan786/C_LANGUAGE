#include<stdio.h>
int main () 
{
    int a[10][4];
    int b[10][4];

    int i,n,j,sum=0;
    printf("enter the number ");
    for (i=0;i<4;i++){
        scanf("%d",&a[i][j]);
        sum=sum+a[i][j];
        printf("sum of row %d",sum);
    
    }

 for (i=0;i<4;i++){
        scanf("%d",&b[i][j]);
        sum=sum+b[j][i];
        printf("sum of row %d",sum);
 }
}
    tfyr

