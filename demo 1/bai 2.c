#include <stdio.h>

float Total(int soluong, float dongia);
float Total(int soluong, float dongia)
{

    float tongtien = soluong * dongia;
    float tongtienthue10 = tongtien * 0.1;
    if(tongtien >= 100){
        tongtien *= 0.98;
    }else if(tongtien >= 200) {
        tongtien *= 0.95;
    }
    return tongtien + tongtienthue10;
}



int main()
{
    int soluong;
    float dongia;

    printf("So luong : ");
    scanf("%d", &soluong);
    printf("Don gia: ");
    scanf("%f", &dongia);

    float totalPrice = Total(soluong, dongia);
    printf("Tong tien kem thue la: %.2f", totalPrice);
    return 0;

}

