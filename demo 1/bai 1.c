#include <stdio.h>

float tong(float a, float b);
int main1()
//int main()
{
    float r;
    r = tong(3,4);
    printf("%f", r);
}
float tong(float a, float b)
{
    float c;
    c= a + b;
    return c;
}