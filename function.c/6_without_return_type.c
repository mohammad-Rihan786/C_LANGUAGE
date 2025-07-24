#include<stdio.h>
void count_to_100();//prototype
void sum_of_number(int ,int );
int addition;
int main () {
    
     count_to_100();// calling of function;
      sum(5,4);// int this 4 and 5 is arguments;
      printf("\nthe sum of two number is %d",addition);

      
    return 0;
}
void count_to_100(){
    for (int i=1;i<100;i++){
    printf(" %d",i);
    }
}
void sum(int x,int y){// this  is a parameter;
    addition= x+y;// ab bar bar int addition lene nhi padega 
    
}
