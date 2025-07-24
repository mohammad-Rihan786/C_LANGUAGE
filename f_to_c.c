#include<stdio.h>

int main() {
    float f;
    printf("welcome to temp converter:\n");
    printf("please enter the temp in F: ");
    scanf("%f", &f);
    

    
    

    float c = (f - 32)*5 / 9;
    printf("\n temp in c is %.2f", c);
    return 0;
}