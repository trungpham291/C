#include <stdio.h>
int main()
{
    int num, res ;
    printf("Nhap so: ");
    scanf("%d", &num);
    res = num %2;
    if (res == 0)
        printf("la so chan");
    else
        printf("La so le 1245");
}