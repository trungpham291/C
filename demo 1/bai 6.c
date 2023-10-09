#include <stdio.h>
int main6()
//int main()
{
    char subjects[][50] = {"Toan", "Van", "Ly", "Hoa", "Sinh"};
    float grades[5];
    float totalGrade = 0.0;
    float averageGrade;

    for (int i =0; i <5; i++){
        printf("Nhap Diem cho mon %s: ", subjects[i]);
        scanf("%f", &grades[i]);
        totalGrade += grades[i];
    }
    averageGrade = totalGrade / 5.0;

    printf("\nDiem cua tung mon hoc:\n");
    for(int i=0; i<5; i++){
        printf("%s: %.2f\n", subjects[i], grades[i]);
    }
    printf("\nDiem trung binh: %.2f\n", averageGrade);
    return 0;
}