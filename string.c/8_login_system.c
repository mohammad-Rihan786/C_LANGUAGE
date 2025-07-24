#include<stdio.h>
#include<string.h>
int main (){
    const char stored_password[]="rihan saifi";
    char password[sizeof(stored_password)];
    printf("please enter your password:");
    //scanf("%s",password);// string me & use nhi hota hai jese ki %s hai dont use &
    fgets(password,sizeof(stored_password),stdin);
    if (strcmp(password,stored_password) ==0){
        puts("asse to login ");
    }else{
        puts("enable to login ,incorrect password ");

    }
    return 0;

}