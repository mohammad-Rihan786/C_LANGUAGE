#include<stdio.h>

int main() {
    const float pi = 3.14159;
    int radius;

    printf("please enter your radius of circle in cms:");
    scanf("%d",&radius);
    printf("the circumfarance of circle is %f cm",2*pi*radius);
    return 0;
}


 