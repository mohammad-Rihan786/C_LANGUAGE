  #include<stdio.h>
  #include<string.h>
  int is_palindrome(char arr[]);
  int main (){
    char text[20];
    printf("enter the number ") ;
    scanf("%s",text);
    if (is_palindrome(text)){
        puts("your input  is palindrome");

    }else{
        puts("your input is not palindromr");
    }
     return 0;
  }
  int is_palindrome(char arr[]){
    int len = strlen(arr);
    for (int i=0;i<len/2;i++){
        if (arr[i]!=arr[len-1-i]){
            return 0;
        }
    }
    return 1;
  }