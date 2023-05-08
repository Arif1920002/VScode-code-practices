//Using #define to define the value of PI= 3.1426 and calculate the area of a circle. (Take radius of the circle as input).


#include <stdio.h>
#define PI 3.1426

void main()
{
    double radius, area;
    printf("Enter radius of the circle: \n"); 		
    scanf("%lf", &radius);

    area = PI * radius * radius;

    printf("Area of the circle is: %lf\n", area);
}