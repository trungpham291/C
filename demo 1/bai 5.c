#include <stdio.h>
int main5()
//int main()
{
    int n;
    int arr[n];
    int i;

    printf("Nhap so luong phan tu mang: ");
    scanf("%d", &n);

    for( i=0; i < n; i++)
    {
        printf("Phan tu %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("So chan trong mang la: ");
    for (i=0; i<n; i++)
    {
        if(arr[i] %2 == 0){
            printf("%d ", arr[i]);
        }
    }
    return 0;

}