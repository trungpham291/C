#include <stdio.h>
int main6()
//int main()
{
    char ch;
    printf("\n Nhap mot ki tu: ");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a' :
        case 'A' :
            printf("\n Ada");
            break;
        case 'b':
        case 'B' :
            printf("\n Basic");
            break;
        case 'c':
        case 'C':
            printf("\n COBOL");
            break;
        case 'd':
        case 'D':
            printf("\n dBASE III");
            break;
        case 'f':
        case 'F':
            printf("\n Fortran");
            break;
        case 'p':
        case 'P':
            printf("\n Pascal");
            break;
        case 'v':
        case 'V':
            printf("\n Visual C++");
            break;
        default :
            printf("\n Ky tu khong nam trong danh sach liet ke");
            break;

    }
}