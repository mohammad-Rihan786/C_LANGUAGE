#include<stdio.h>

int main() {
    int num,i;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(i=2;i<num;i++ ){
        if (num%i==0) {
            printf("the number %d is not prime",num);
             return 0;
      
           
        }
    }
     printf("the number %d is  prime  ",num);
     return 0;


     

       
        
   
}


