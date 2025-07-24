#include <stdio.h> 
  int main() 
{ 
      struct B { 
        // sizeof(double) = 8 
        double z; 
          // sizeof(int) = 4 
        int x; 
          // sizeof(short int) = 2 
        short int y; 
        // Padding of 2 bytes 
    }; 
      printf("Size of struct: %ld", sizeof(struct B)); 
      return 0; 
} 