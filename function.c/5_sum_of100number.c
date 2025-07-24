#include<stdio.h>
void count_to_100();//prototype
int sum_of_number(int ,int );
int main () {
    
     count_to_100();// calling of function;
     int add = sum(5,4);
      printf("\nthe sum of two number is %d",add);

      
    return 0;
}
void count_to_100(){
    for (int i=1;i<100;i++){
    printf(" %d",i);
    }
}
int sum(int x,int y){
    int addition = x+y;// ise delete karke 
    return addition;// also write return x+y
}
