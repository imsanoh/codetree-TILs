#include <stdio.h>

int main() 
{
    int a;
    int b;

    scanf("%d %d", &a, &b);

    a += b;
    b += a;

    printf("%d %d", a, b);

    return 0;
}