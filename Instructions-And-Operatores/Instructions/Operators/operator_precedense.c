#include <stdio.h>

int main()
{
    int x = 2;
    int y = 3;
    printf("This value of 3 * x - 8 * y is %d\n", 3 * x - 8 * y); // -18
    printf("This value of 8 * y - 3 * x is %d\n", 8 * y - 3 * x); // 18
    printf("This value of 8 * y / 3 * x is %d\n", 8 * y / 3 * x); // 16

    return 0;
}