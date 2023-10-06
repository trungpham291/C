#include <stdio.h>

int main()
{
    int n, i;
    int count = 0;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    float marks[n];

    for ( i =0; i < n; i++)
    {
        printf("Nhap diem cho sinh vien%d :", i +1);
        scanf("%f", &marks[i]);
        if(marks[i]<5)
            count++;
    }
    printf("So luong sinh vien da truot %d", count);


}