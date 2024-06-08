#include <stdio.h>

int main(){
    // int a; b= a; is an Error but
    int a; int b; // is not an error
    int v = 3 ^ 3; // ^ is bitwise XOR operator in C, so this does not give 27. So this is a valid program in C
    printf("%d\n", v);
    // char dt = '8 June 2024'; // Error because char can only store one character.
    return 0;
}