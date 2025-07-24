#include<stdio.h>
int main () {
    int i;

    int marks[5];
    for (int i=0;i<5;i++){
     printf("please enter the marks student ");
        scanf("%d",&marks[i]);

    }
    for (int i=0;i<5;i++){

    
    printf("\n marks of studen %d  ",marks[i]);
    }
    return 0;

}

