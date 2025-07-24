#include<stdio.h>
int main () {
    int i,num,n,temp;
    
    printf("enter the n");
    scanf("%d",&n);
    int arr[n];
    printf("enter array\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf(" reverse of array \n");
    for (i=n-1;i>=0;i--){
        printf("%d",arr[i]);
    }
}