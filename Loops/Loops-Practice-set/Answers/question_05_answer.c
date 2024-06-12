#include <stdio.h>
int main()
{
    int i = 1, sum=0, n=10;
    while (i<=n){
        sum += i;
        i++;
    }
    printf("The =value of sum of first 10 natural numbers is %d\n", sum);

    return 0;
}