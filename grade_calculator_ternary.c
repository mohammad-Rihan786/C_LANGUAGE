 #include<stdio.h>

 int main() {

    int marks;
    printf("please enter your marks:");
    scanf("%d",&marks);

    printf("your marks in this category :");
    marks>80 ? printf("High"):(marks>=50 ? printf("Modrate"):printf("Low"));
    return 0;

 }