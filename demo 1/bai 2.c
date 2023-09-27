#include <stdio.h>
int main2()
//int main()
{
    char subject[50] ;
    char choice;
    float diem =0;
    do{
        printf("Nhap ten mon hoc: ");
        scanf("%s", &subject);
        printf("Nhap Diem: ");
        scanf("%f", &diem);

        printf("Ban co muon tiep tuc khong (y/n): ");
        scanf(" %c", &choice);


    }while ( choice != 'n' );




    return 1;
}