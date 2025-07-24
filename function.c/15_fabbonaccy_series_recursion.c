#include<stdio.h>
int fabonaccy(int pos);
int main(){
    int term;
    printf("please enter the number ");
    scanf("%d",&term);
    for (int i=0;i<term;i++){
        printf("%d\n",fabonaccy(i));
    }
    return 0;

}
int fabonaccy(int pos){
    if(pos<=1){
        return pos;
    }
    
    int current = fabonaccy(pos-1) + fabonaccy(pos-2);
    return current;
    }
