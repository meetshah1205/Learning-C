#include <stdio.h>

int main(){
    int num;
    printf("Give a number:\n");
    scanf("%d", &num);
    printf("Divisiblity test returns %d", num % 97); // Didn't use if-else because even if I know how to use them in C, according to these notes, I don't know them yet.
    return 0;
}