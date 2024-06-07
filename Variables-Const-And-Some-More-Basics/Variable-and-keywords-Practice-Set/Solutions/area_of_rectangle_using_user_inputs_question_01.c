#include <stdio.h>

int main(){
    int length;
    int width;
    printf("Give the length of the rectangle:\n");
    scanf("%d", length);

    printf("Give the width of the rectangle:\n");
    scanf("%d", width);

    int area = length * width;
    printf("The area of the rectangle is: %d", area);
    return 0;
}