#include<stdio.h>
#include<math.h>

int main() {
    float root ;

    int num,n;

    printf("enter the number ");
    scanf("%d",&num);
     printf("enter the nth number ");
      scanf("%d",&n);
      root = pow(num, (1.0/n));
      printf("%f", root);
      return 0;
}


