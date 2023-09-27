#include <stdio.h>
int main3()

//int main()
{
    int count = 0 ;
    float total = 0 ;
    char choice;
    char subject[50];
    float score;

    do{
        printf("Nhap ten mon hoc: ");
        scanf("%s", subject);
        printf("Nhap diem: ");
        scanf("%f", &score);
        total += score; // cong don
        count++; // dung de xem co tong cong bao mon de chia (23)
        printf("Ban co muon tiep tuc hay khong? : ");
        scanf(" %c", &choice);
    }while (choice == 'y' || choice == 'Y');

    if (count > 0) {
        double average = total / count ;
        printf("Diem trung binh cua ban la : %.2lf\n", average);
    }else {
        printf("Khong co mon hoc nao duoc nhap diem. \n");
    }
    return 0;
}