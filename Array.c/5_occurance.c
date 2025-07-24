#include<stdio.h>
int main() {
    int i,num,result,occurrence,size,rihan;
    int counter =0;
    int arr [] ={3,6,7,98,45,3,6,98,6,71,10};
   
    for (i=0;i<10;i++){
        if (arr[i]==98){
            counter++;
        }
    }
    printf("\nthe number of occurrece of 98 are %d",counter);

}