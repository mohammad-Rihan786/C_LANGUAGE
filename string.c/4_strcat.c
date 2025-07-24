#include<stdio.h>
#include<string.h>
int main ()
{
    char first_name[50];
    char last_name[50];
    printf(" enter the first name ");
    fgets(first_name,50,stdin);
    printf("enter the last name ");
    fgets(last_name,50,stdin);
    strcat(first_name,last_name);
    printf("the final name is %s",first_name);//last name next line me dega enter click karne ki vjh se


}