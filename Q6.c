/* The distance between Mirpur and Ashulia is input through the keyboard in meters. Write
a program to convert and print this distance in feet, inches and centimeters.*/

#include <stdio.h>

void main()
{
    float dis_meter, dis_feet, dis_inch, dis_centimeter, dis_kilometer;
    printf("Enter distance in meters: \n");
    scanf("%f", &dis_meter);

    /*1 meter=100 cm
    1 meter=39.37 inch
    1 meter=3.21 feet*
    1 meter=1/1000 kilometers */

        dis_feet = dis_meter * 3.21;
        dis_inch = dis_meter * 39.37;
        dis_centimeter = dis_meter * 100;
        dis_kilometer = dis_meter / 1000;

    printf("Distance in feet: %f \n", dis_feet);
    printf("Distance in inches: %f \n", dis_inch);
    printf("Distance in centimeters: %f \n", dis_centimeter);
    printf("Distance in kilometers: %f \n", dis_kilometer);


}