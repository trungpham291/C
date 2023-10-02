#include <stdio.h>

int main()
{
    int i;
    int arr[7];
    arr[0] = 1;
    arr[1] = 3;
    arr[2] = 7;
    arr[3] = 9;
    arr[4] = 4;
    arr[5] = 6;
    arr[6] = 5;
    for (i=0; i<7; i++)
    {
        printf("%d \n", arr[i]);
    }
    int max = arr[0];
    for (i=1; i<7; i++)
    {
       if (max < arr[i])  // i chay lan luot i<3
            max = arr[i]; // max se gan so lon nhat max=3
    }
    int min = arr[0];
    for(i=1; i<7; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    printf("MAX :%d\n", max);
    printf("MIN :%d\n", min);
}