#include <stdio.h>

int main() 
{
    int a = 3;
    int b = 5;
    int c;

    c = a;
    a = b;
    b = c;

    printf("%d\n%d", a, b);
    
    return 0;
}