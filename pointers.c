#include <stdio.h>

int main() {
    int *ptr, a = 10;   // Declare an integer 'a' with value 10, and a pointer 'ptr'
    ptr = &a;           // Assign the address of 'a' to 'ptr'
    *ptr += 1;          // Dereference 'ptr' and increment the value of 'a' by 1
    printf("%d,%d\n", *ptr, a);  // Print the value pointed by 'ptr' and 'a'
}