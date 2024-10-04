#include <stdio.h>

int main() 
{
    int a;
    int b;
    
    int pl, mi, sl, pr;

    scanf ("%d %d", &a, &b);

    pl = a + b;

    mi = a - b;

    sl  = a/b;

    pr = a%b;

    printf("%d\n%d\n%d\n%d", pl, mi, sl, pr);

    return 0;
}