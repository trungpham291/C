#include <stdio.h>
int main7()
//int main()
{
    int a, c;
    printf("Enter a number : ");
    scanf("%d", &a);
    c = a % 2;
    if (c == 0)
        printf("The number is Even : ");
    else
        printf("The number is odd:  ");

}
