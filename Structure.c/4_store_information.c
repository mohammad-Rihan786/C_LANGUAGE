#include<stdio.h>
struct student{
    char firstname[50];
    int rollnumber;
    float marks; 
} s[10];
int main (){
    int i;
    printf("enter the information\n ");
    for(i=0;i<2;i++){
        s[i].rollnumber=i+1;
        printf("enter the name ");
        scanf("%s",s[i].firstname);
        printf(" enter the marks ");
        scanf("%f",&s[i].marks);


    }
    printf(" display the information \n");

    for (i=0;i<2;i++){
        printf("roll number %d \n ",i+1);
        printf("name is ");
        puts(s[i].firstname);
        printf("marks  %.1f is  ",s[i].marks);
        printf("\n");

    }
}