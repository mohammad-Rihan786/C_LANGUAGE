#include<stdio.h>

int main () {
    int a[10][10];
    int b[10][10];
    int i,j,c[10][10];
    
    printf("enter the element");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);

        }
    }

    printf("the matrix is \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
    printf("enter the element of another matrix ");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
     }
     printf("the second matix is \n");
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
      }
      printf("the final substraction of matrix is \n");
       for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j] -b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
       }




}