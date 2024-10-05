#include <stdio.h>

int main() 
{
    int a;
    int b;
    double c;
    double d;
    double e;

    scanf("%d %d", &a, &b);

    c = (double)a+(double)b;
    d = (double)a-(double)b;

    e = c/d;

    printf("%.2lf", e);

    return 0;
}