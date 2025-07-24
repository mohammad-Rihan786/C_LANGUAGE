#include <stdio.h>

int main()  
{
    int integer;
    float decimal;
    double doub;
    char character;

    printf("\nthe size of int is %lu bytes",sizeof(integer));
    printf("\nthe size of float is %lu bytes",sizeof(decimal));
    printf("\nthe size of double is %lu bytes",sizeof(doub));
    printf("\nthe size of char is %lu bytes",sizeof(character));
    
    return 0;
}

