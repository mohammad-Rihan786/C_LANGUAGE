#include<stdio.h>
void count_to_100();//prototype
int main () {
    
     count_to_100();// calling of function;
      
    return 0;
}
void count_to_100(){
    for (int i=1;i<100;i++){
    printf(" %d",i);
    }
}
