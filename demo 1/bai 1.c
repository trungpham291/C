#include <stdio.h>

char xeploai(int mark);
char xeploai(int mark)
{
    char grade;
    if (mark >= 90){
        grade = 'A';
    }else if(mark >= 80){
        grade = 'B';
    }else if(mark >= 70){
        grade = 'C';
    }else if(mark >= 60){
        grade = 'D';
    }else {
        grade = 'E';
    }
    return grade;
}
int main1()
//int main()
{
    int mark;
    printf("Enter marks: ");
    scanf("%d", &mark);

    char grade = xeploai(mark);
    printf("Grade: %c\n",grade);


}