#include<stdio.h>
#include<math.h>

int main() {
    int num, numc, sum = 0, c;
    printf("enter the number: ");
    scanf("%d", &num);
    numc = num;
    while(numc > 0) {
        c = numc % 10;
        sum = sum + (c * c * c);
        numc /= 10;
    }
    if(sum == num) {
        printf("the number %d is an Armstrong number\n", num);
    } else {
        printf("the number %d is not an Armstrong number\n", num);
    }
    return 0;
}