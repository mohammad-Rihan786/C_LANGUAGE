#include<stdio.h>
#include<math.h>

int main() {

    float principle,rate,time;
    printf(" welcome to compound intrest calculator:\n");
    printf("please enter the principle:");
    scanf("%f",&principle);
    printf("now, enter the rate:");
    scanf("%f",&rate);
    printf("now, enter the time:");
    scanf("%f",&time);

    float intrest =  principle*pow((1 + rate /100),time);
    printf("\n  compound interest is : %f",intrest);
    return 0;
}
