#include<stdio.h>
void min_max(int*,int*,int*,int*);
int main () {
    int first ,second,min ,max;
    printf("enter the first number ");
    scanf("%d",&first);
     printf("enter the second number ");
    scanf("%d",&second);
    min_max(&first,&second,&min,&max);
    printf("between %dand %d minimum is %d and max is %d",first,second,min,max);
    return 0;



}
void min_max(int*a,int*b,int*min,int*max){
    if (*a>*b){
        *min=*b;
        *max=*a;
    }else{
        *min=*a;
        *max=*b;
    }
    
}
