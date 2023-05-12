/* 3. The length & breadth of a rectangle are input through the keyboard. Find out the
rectangle’s area.*/


#include <stdio.h>

void main()
{
    double length, breadth, area; //long double is for integer values and can't be used for float values
    printf("Enter length and breadth of a rectangle: \n");
    scanf("%lf %lf", &length, &breadth);
    area = length * breadth;
    printf("Area of the rectangle is: %lf\n", area);

    return 0;
}
