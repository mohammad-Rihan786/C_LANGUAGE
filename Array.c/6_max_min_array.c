#include<stdio.h>
int main () {
    int arr[10];
    for ( int i=0; i<10;i++){
        printf("enter the %dth value ",(i+1 ));
        scanf("%d", &arr[i]);

    }
    int max = arr[0];
    int min = arr[0];
    for (  int i=1;i<10; i++){
        if (max <arr[i]){
            max=arr[i];
        }
        if (min >arr[i]){
            min =arr[i];
        }
    }
    printf("the minimum value is %d and the maximum value is %d ",min ,max);
    return 0;

}         