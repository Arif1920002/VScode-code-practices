/* 4. Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a
program to convert this temperature into Centigrade degrees.*/

//c/5 = (f-32)/9 = (k-274)/5
// so, c = {(f-32)*5}/9 = k-274
// so, c = {(f-32)*5}/9 ---1
// so, k = [{(f-32)*5}/9]+274  or c+274 ---2

#include <stdio.h>

void main()
{
    float temp_c, temp_f, temp_k;
    
    printf("Enter temperature in fahrenheit: \n");
    scanf("%f", &temp_f);

    temp_c = (temp_f - 32) * 5 / 9; // Convert Fahrenheit to Celsius
    temp_k = temp_c + 274; //convert Fahrenheit to kelvin 

    printf("Temperature in centigrade: %f \n", temp_c);
    printf("Temperature in kelvin: %f \n", temp_k);

    
}
