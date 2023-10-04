#include <stdio.h>
int main4()
//int main()
{
    int arr[10];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;
    arr[5] = 6;
    arr[6] = 7;
    arr[7] = 8;
    arr[8] = 9;
    arr[9] = 10;
    int i,a;
    int found = 0;

    printf("Cac Phan Tu cua mang bao gom: ");
    for (i=1; i< 11; i++)
    {
        printf("%d\t", i);
    }
    printf("\n Nhap phan tu ban muon tim: ");
    scanf("%d", &a);

    for (i=1; i<11; i++)
    {
        if (arr[i] == a){
            printf("Phan tu %d duoc tim thay tai vi tri %d\n", a,i);
            found = 1;
        }
    }
    if (!found) {
        printf("Phan tu %d khong co trong mang.\n",a);
    }
    return 0;
}