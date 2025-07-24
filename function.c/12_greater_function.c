#include<stdio.h>
float max(float,float);
int main(){
    float a,b;
    printf("enter the first number ");
    scanf("%f",&a);
    printf("enter the second  number ");
    scanf("%f",&b);


    printf("the max number is %.2f",max(a,b));
    return 0;


}
float max(float first,float second){
    return first>second?first: second;
}
