#include<stdio.h>
int main() {
    float first,second,res;
    char opr;
  

    printf("welcome to calculator:\n");
     printf(" enter the opration:");
    scanf("%c",&opr);
    printf("\nplease enter the first number:");
    scanf("%f",&first);
    printf("now, enter the second number:");
    scanf("%f",&second);
   
     
    switch (opr)
    {
    case '+':
        res = first + second;
        break;
    case '*': 
        res = first * second;
        break;
    case '-' :
        res = first - second;
        break;
     case '/' : 
        res = first / second;
        break;
        default:
        printf("invalid operator, pleasse enter (+,-,/,*).\n");
         break;
    }
    
    printf("the result is : %f\n", res);

    return 0;
}