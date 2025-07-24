#include<stdio.h>
int sum(int,int);/* if without return type use void sum
also use int addition for all code dont watn again and again use int add*/

int main() {
    int add=sum(4,5);
    printf("%d",add);
    return 0;
}
int sum(int first,int second){
int addition = first + second;
return addition;//delete thi if you want eithout retunr type 
}