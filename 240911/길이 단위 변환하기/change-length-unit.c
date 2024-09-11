#include <stdio.h>

int main() 
{
    float ft = 30.48;
    float mi = 160934;

    float a = ft * 9.2;
    float b = mi * 1.3;

    printf("9.2ft = %.1lfcm\n1.3mi = %.1lfcm", a, b);

    return 0;
}