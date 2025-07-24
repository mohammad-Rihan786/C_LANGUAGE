#include<stdio.h>
#include<string.h>
int main (){
    int result=strcmp("apple","bnana");
    printf("comparition of apple and bnana is %d\n",result);
    result=strcmp("cherry","bnana");
    printf("comparition of cherry and bnana is %d\n",result);
     result=strcmp("date","date");
    printf("comparition of date and date is %d",result);

}/* output -1 ayega kyuki a pehle aata hai b se 
second vale me output 1 ayega kyuki b pehle ata hai c se
third vale me output 0 ayega kyuki dono same hai*/