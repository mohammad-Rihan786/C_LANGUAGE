#include<stdio.h>

int main () {

    int i,j,row;
    printf("enter the number of rows");
    scanf("%d",&row);
    
    for(i=0;i<=row;i++){  
        printf("\n");
      for(j=0;j<row-i;j++){
        printf("*");
         }
    }
    return 0;
}
    

    