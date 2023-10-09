#include <stdio.h>

void printMenu();
void kiemtrasodu();
void ruttien();
void guitien();
float sodu = 0.0;
int main4()
//int main()
{
    char luachon;
    do{
        printMenu();
        printf("Nhap lua chon cua ban: ");
        scanf(" %c", &luachon);

        switch (luachon){
            case 'a':
                kiemtrasodu();
                break;
            case 'b':
                ruttien();
                break;
            case 'c':
                guitien();
                break;
            case 'd':
                printf("Cam on ban da su dung may ATM. Hen gap lai!\n");
                break;
            default:
                printf("Nhap khong dung. Vui long nhap lai.\n");
        }
        printf("\n");

    }while (luachon != 'd');
    return 0;
}

void printMenu()
{
    printf("***********ATM************\n");
    printf("a. Kiem tra so du\n");
    printf("b. Rut tien\n");
    printf("c. Gui tien\n");
    printf("d. Thoat\n");
}

void kiemtrasodu()
{
    printf("So du hien tai la : $%.2f\n", sodu);

}
void ruttien()
{
    float sotien;
    printf("Nhap so tien can rut: $");
    scanf("%f", &sotien);

    if (sotien > 0 && sotien <= sodu){
        sodu -= sotien;
        printf("Rut tien thanh cong. So du moi: $%.2f\n", sodu);
    }else{
        printf("So tien khong phu hop le hoac so du khong du.\n");
    }
}

void guitien()
{
    float sotien;
    printf("Nhap so tien can gui: $");
    scanf("%f", &sotien);

    if (sotien > 0) {
        sodu += sotien;
        printf("Gui tien thanh cong. So du moi: $%.2f\n", sodu);
    }else {
        printf("So tien khong hop le.\n");
    }

}