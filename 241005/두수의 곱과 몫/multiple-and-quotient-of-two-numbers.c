#include <stdio.h>

int main() 
{
    int a;
    int b;

    scanf("%d %d", &a, &b);

    printf("%d * %d = %d\n%d / %d = %d", a, b, a*b, a, b, a/b);

    return 0;
}