#include<stdio.h>

int main() {

    int marks;
    printf("\nwelcome to grade calculator:");

    printf("\nplease enter your grade: ");
    scanf("%d",&marks);

    if(marks >90) {
        printf("you have got A grade 'congratulation'");
    }else if(marks>75){
        printf("you have got B grade");
    }else if(marks>60){
        printf("you have got C grade");
    }else if(marks>30){
        printf("you have got D grade");
    }else {
        printf("you have faild the exam with  'F' grade ");
    }
    return 0;
}