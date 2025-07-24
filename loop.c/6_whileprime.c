#include<stdio.h>

int main() {
    int num,i;
    printf("Enter thwe number: ");
    scanf("%d", &num);
    i=2;
    while(i<num ){
        if (num%i==0) {
            printf("the number %d is not prime",num);
             return 0;
        }
        i++;
    }
     printf("the number %d is  prime  ",num);
     return 0;
}