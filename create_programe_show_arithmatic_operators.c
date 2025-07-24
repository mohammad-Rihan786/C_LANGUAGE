#include<stdio.h>

int main() {
    int first,second;
    printf("please enter the first number");
    scanf("%d",&first);
    printf("now, enter the second number");
    scanf("%d",&second);
      
    printf("here the result of the operation");
    printf("\n%d + %d = %d", first,second,(first + second));
    printf("\n%d - %d = %d", first,second,(first - second));
    printf("\n%d * %d = %d", first,second,(first * second));
    printf("\n%d / %d = %d", first,second,(first / second));
    printf("\n%d modulo %d = %d", first,second,(first % second));
    return 0;

}





