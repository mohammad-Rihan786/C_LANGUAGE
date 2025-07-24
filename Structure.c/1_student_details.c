#include<stdio.h>
struct Student {
    int rollno;
    char name[10];
    float marks;


};
int main () {
    struct Student student1;// student1 ki jgh kuch or bhi likh sakte hai variable name hai 
    printf ("please enter the roll number ");
    scanf("%d",&student1.rollno);
    printf("enter the name ");
    scanf("%9s",student1.name);
    printf(" please enter the marks ");
    scanf("%f",&student1.marks);


    printf(" Here is the result of student details \n");
    printf(" rollnumber %d : name is %s : marks %.2f :",student1.rollno,student1.name,student1.marks );
    return 0;
}