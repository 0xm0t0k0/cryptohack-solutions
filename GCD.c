/* Euclids Algorithm */
#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main(void)
{
    int x, y;
    printf("Enter 2 numbers to find their greatest common divisor: ");
    scanf("%d %d", &x, &y);

    int result;
    result = gcd(x,y);
    printf("Result: %d", result);
}