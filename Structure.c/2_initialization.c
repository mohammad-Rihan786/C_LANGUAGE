#include<stdio.h>
 struct student  {
    int rollno;
    char name[10];
    float marks;
 };
 int main () {
     struct student s1 = { 1, "rihan" ,98.9};
     printf("Rollno: %d,Name: %s ,marks:%.2f",s1.rollno, s1.name , s1.marks);
     return 0;

 }
