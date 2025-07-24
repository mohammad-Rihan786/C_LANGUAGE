#include<stdio.h>
#include<string.h>
int main (){
    char name [50];
    printf("please enter your name ");
    fgets(name ,50 ,stdin);//name 5 characte ka hai to ans 6 dega becouse null ko bhi add karega 
    char new_name[50];
    strcpy(new_name,name);
    printf(" %s is copied to %s",name,new_name );
}