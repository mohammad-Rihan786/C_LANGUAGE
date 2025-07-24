#include<stdio.h>
int main () {
    int i,j,row,num;
    int a [10][10];
    printf("enter the element of : ");
    for ( i=0;i<3;i++){
        for (j=0 ; j<3;j++){
            scanf("%d",&a[i][j]);
    }
    }
    printf("the  array is\n ");
    for ( i=0;i<3;i++){
        for ( j=0 ; j<3;j++){
        printf("%d\t",a[i][j]);
     }
     printf("\n");
     }
     printf("the transpose of matrix is\n ");
       for ( i=0;i<3;i++){
        for ( j=0 ; j<3;j++){
        printf("%d\t",a[j][i]);
     }
     printf("\n");
     }

     
}
    


        



