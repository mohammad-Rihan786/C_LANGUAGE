#include<stdio.h>
int is_palindrome(int a[],int size);
int main () {
    int a1[9]={3,6,8,4,5,4,8,6,3};
        int a2[4]={1,1,1,1};
    int a3[5]={1,1,1,1,2};
    printf("the result of first array is %d\n",is_palindrome(a1,9));
        printf("the result of second array is %d\n",is_palindrome(a2,4));
    printf("the result of third array is %d\n",is_palindrome(a3,5));
    return 0;
}
    int is_palindrome(int a[],int size){
        for(int i=0;i<size/2;i++){
            if (a[i]!=a[ size -1-i]){
          return 0;

            }
        }
        return 1;
    }




