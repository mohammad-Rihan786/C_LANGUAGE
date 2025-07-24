#include<stdio.h>
int main (){
    char name[6];// isme ek space null ka hota hai agar 5 value dali hai to 4 hi dega like rihan only riha dega 
    printf("enter the name ");
    fgets(name,sizeof(name),stdin);//gets isliye use ni karte kyuki value 5 dali usse zyada bhi le lega fgets me esa ni hota 
    puts(name);// stdin ka matlab standard input means read kha se karna hai  
    printf("good morning ");
    puts(name);
}