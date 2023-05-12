/* 7. Niloys basic salary is input through the keyboard. His dearness allowance is 40% of his
basic salary and house rent is 20% of his basic salary. Write a program to calculate his
gross salary.*/


#include <stdio.h>

void main()
{
    float salary, gross_salary, dearness_allowance, house_rent;
    printf("Enter salary: \n");
    scanf("%f", &salary);

//calculating the salaries
    dearness_allowance = salary*(40.0/100.0);
    house_rent = salary*(20.0/100.0);
    gross_salary = salary + house_rent + dearness_allowance;

//printing the salaries
    printf("dearness allowance= %f\n" , dearness_allowance);
    printf("house rent= %f\n" , house_rent);
    printf("gross salary = %f\n", gross_salary);

}