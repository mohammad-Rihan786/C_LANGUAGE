 #include<stdio.h>

 int main () {

    int num;
    printf("welcome to printing table\n");
    printf("please enter the number :");
    scanf("%d",&num);


    int i=1;
    while(i<=10){
     printf("\n%d X %d = %d",num,i,num*i);
     i++;
    }
    return 0;
 }