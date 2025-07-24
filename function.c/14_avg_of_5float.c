#include<stdio.h>
float get_avg(int,int,int,int,int);
int main (){
    int a,b,c,d,e;
    printf("\n enter the number first number , second number , third number , fourth number , fifth number\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e,&e);

    float average = get_avg(a,b,c,d,e);
    printf("\n the average of number is %f",average);
    return 0;
}
float get_avg(int a,int b,int c,int d,int e){
    float sum=a+b+c+d+e;
    return sum/5;
}