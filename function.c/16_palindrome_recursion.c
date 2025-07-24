#include<stdio.h>
int reverse(int ,int );
int main (){
    int num;
    printf("enter the nuber ");
    scanf("%d",&num);
    int rev= reverse(num,0);
    if (num==rev){
        printf("the number %d is palindrome",num);

    }else{
        printf("the number %d is not palindrome ",num);
    }
}
int reverse(int num,int rev){
    if (num==0){
        return rev;
    }
    int reminder=num%10;
    int new_num=num/10;
    int new_rev=rev*10+reminder;
    return reverse(new_num,new_rev);
}