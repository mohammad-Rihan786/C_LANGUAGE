#include<stdio.h>

int main (){
    int num;
    int *ptr=&num;
    printf("enter the nunmber ");//charaCTER KR LIYE %C LGANA HAI YHI DIFFRENCE HAI 
    scanf ("%d",ptr);
    printf("\nthe vaLUE of number is %d",*ptr);
        printf("\nthe vaLUE of number is %d",num);

}  // JHA NUM HAI VHA CHARACTER HO JY GA 