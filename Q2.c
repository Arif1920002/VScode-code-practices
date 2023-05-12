/* 2. Taking 3 float numbers and calculating the average of them.*/

#include <stdio.h>

int main()
{
    float a,b,c,avg;
    printf("enter three float numbers:\n");
    scanf("%f %f %f", &a, &b, &c);
    avg = (a+b+c)/3;
    printf("average of the three float numbers are: %f\n", avg);
    
    return 0;
}