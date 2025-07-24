#include <stdio.h>

int countVowels(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); // Note: gets() is unsafe, consider using fgets() for real applications
    
    int vowelCount = countVowels(str);
    printf("Number of vowels in the string: %d\n", vowelCount);
    
    return 0;
}