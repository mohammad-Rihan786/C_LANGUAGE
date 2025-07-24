#include<stdio.h>
void increment(int );
int main (){
    int num;
    printf("enter the nuber ");
    scanf("%d",&num);


    printf("\n the value before is %d",num);
    increment(num);
    printf("\n the value after is %d",num);
    return 0;
}
void increment(int a){
    printf("\n the value before change %d",a);
    a++;
    printf("\n the value after the change is %d",a);

}