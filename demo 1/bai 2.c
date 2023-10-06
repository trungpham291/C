#include <stdio.h>

int add(int a, int b);
int main2()
//int main()
{
    int result = add(5,3);
    printf("Tong la: %d", result);

    int result2 = add(4,3);
    printf("Tong la: %d", result2);

    int num1, num2;
    printf("Nhap so hang thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so hang thu hai: ");
    scanf("%d", &num2);

    int result3 = add(num1, num2);
    printf("Tong la: %d\n", result3);
    return 0;

}
int add(int a, int b){
    printf("\n\n Thuc hien tinh cong: \n");
    printf("So hang a = %d\n",a );
    printf("So hang b =%d\n", b);
    return a+b;
}


