#include<stdio.h>
#include<string.h>
int main (){
    char text[100];
    printf("please enter the text\n");
    fgets(text,100,stdin);
    for (int i=0;i<strlen(text);i++){
        text[i] = toupper(text[i]);
    }
    printf("here is your upper case %s",text);
    return 0;
}