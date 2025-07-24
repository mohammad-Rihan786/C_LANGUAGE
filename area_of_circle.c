#include<stdio.h>

int main() { 
    const float pi = 3.14159;
    int radius ;

    printf("please enter the radius of the circle in cms :");
    scanf("%d",&radius);
    printf("the area of circle is %f cm2",pi*radius*radius);
    
    return 0;  
}

