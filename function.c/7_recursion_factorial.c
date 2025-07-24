#include<stdio.h>
int factorial_of_number(int);
int main() {
   int res= factorial_of_number(4);
   printf("factorial of a number is %d",res);
    return 0;
   }
   int factorial_of_number(int num){//for recurtion bracket ke baad if (num==o){return 1;}next line return num*facttorial_of number (num-1);} other same hai 
   printf(",");
   if (num==0){
       return 1;
   }
       else{
        return num* factorial_of_number(num-1);
       }
    
    
    
    
   }
