#include<stdio.h>

int main() {
    float principle,rate,time;
    printf("welcome to simple intrest calculator:\n");
    printf("please enter the principle");
    scanf("%f",&principle);
    printf("now,enter the rate ");
    scanf("%f",&rate);
    printf("now,enter the time");
    scanf("%f",&time);

    float intrest = (principle* rate * time) / 100;
    printf("\n simpl intrest is %.2f", intrest);
    return 0;
}