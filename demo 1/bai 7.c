#include <stdio.h>
int main7()
//int main()
{
    float a,b, bmi;
    printf("Nhap so can nang: ");
    scanf("%d", &a);
    printf("Nhap so chieu cao: ");
    scanf("%f", &b);
    bmi = a / b * b ;
    if (bmi<18)
        printf("\n Gay", bmi);
    else if ( bmi < 24.9)
        printf("\n BINH THUONG", bmi);
    else if( bmi < 29.9)
        printf("\n BEO", bmi);
    else
        printf("\n BEO PHI", bmi);
}