#include<stdio.h>

int main() {

    int h,b;
    printf(" welcome to area of triange ,\n");
    printf("please enter the hight: ");
    scanf("%d",&h);
    printf("now, enter the base:");
    scanf("%d", &b);

    float area = 0.5 *b * h;
    printf("\n area of triangle is: %f",area);
    return 0;
}