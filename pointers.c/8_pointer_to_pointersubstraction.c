#include<stdio.h>  
void main ()  
{  
    int i = 100;   
    int *p = &i;  
    int *temp; // another pointer  
    temp = p; 
    printf(" the value before substraction %d\n",temp); // temperature ki value jo aayegi usme 12 plus ho jygi fir minus  
    p = p + 3;  
    printf("Pointer Subtraction: %d - %d = %d",p, temp, p-temp);  
}  