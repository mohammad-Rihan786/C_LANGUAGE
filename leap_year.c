 #include<stdio.h>

 int main () {

    int year;
    printf("please enter the year :");
    scanf("%d",&year);
   if (year %400==0 || (year %4 ==0&& year %100 !=0)) {
        printf("%d is a leaap year",year);
    }else{ 
        printf("%d is not a leap year", year);
    }
    return 0;
 }