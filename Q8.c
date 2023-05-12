/* 8. If the marks obtained by a student in five different subjects are input through the
keyboard, find out the aggregate marks and average marks obtained by the student.
Assume that the maximum marks that can be obtained by a student in each subject is
100.*/



#include <stdio.h>

void main()
{
    float a,b,c,d,e,total,avg;
    printf("Enter Numbers :\n");
    scanf("%f %f %f %f %f", &a,&b,&c,&d,&e);

    if (a >= 100 || b >= 100 || c >= 100 || d >= 100 || e >= 100)
    {
        printf("Maximum number can't exceed 100");
    }

    else
    {
        total = a+b+c+d+e;
        avg = total / 5;

            printf("Total marks = %f\n", total);
            printf("Average marks = %f\n", avg);
    }




}