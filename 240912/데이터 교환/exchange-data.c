#include <stdio.h>

int main() 
{
    int a = 5;
    int b = 6;
    int c = 7;
    int d;

    d = a;
    a = c;
    c = b;
    b = d;

    printf("%d\n%d\n%d", a, b, c);
    return 0;
}