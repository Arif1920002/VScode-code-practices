/*4. A computer manufacturing company has the following monthly compensation policy to the sales-person:

Minimum base salary: 1500.00
Bonus for every computer sold: 200.00
Commission on the total monthly sales: 2%

Write a program to calculate the gross salary for a sales person. You will take input the price of each computer and the number of sold during the month.*/


#include <stdio.h>

int main()
{
    float total_bonus, num_of_sales, total_comm, total_salary ;
    
    float min_base_sal = 1500.00 ; // fixed
    float bonus = 200.00 ; // fixed (so the price of the computer does not matter as the bonus ain't gonna change)
    float comm = (2.0/100.0); //fixed

    printf("Enter number of computer sales:\n" );
    scanf("%f", &num_of_sales); //only the number of sales affects the salary of the person.

    total_bonus = num_of_sales * bonus ;
    total_comm = num_of_sales * comm ;

    total_salary = min_base_sal + total_comm + total_bonus ; 

    printf("Total bonus : %f\n", total_bonus);
    printf("Total commission : %f\n", total_comm);
    printf("Gross salary:%.2f\n", total_salary) ;

return 0;

}