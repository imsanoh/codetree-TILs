#include <stdio.h>

int main() 
{
    float a;
    float b;
    char c;

    scanf("%c\n%f\n%f", &c, &a, &b);

    printf("%c\n%.2lf\n%.2lf",c, a, b);

    return 0;
}