#include<stdio.h>
#include<string.h>
int main (){
    char name [50];
    printf("please enter your name ");
    fgets(name ,50 ,stdin);//name 5 characte ka hai to ans 6 dega becouse enter  ko bhi add karega 
    int size = strlen(name);
    printf("length of name is  %d",size);
    
}