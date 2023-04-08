/* 1. Taking 2 integer numbers as input and then add, subtract, multiply and divide them,
Finally print the output results.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, sum, sub, mult, div;
    printf("Enter two integer numbers as input:\n");
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf(" Sum of the two integer numbers: %d\n", sum);

    sub = a - b;
    printf(" Subtraction of the two integer numbers: %d\n", sub);

    mult = a * b;
    printf(" multiplication of the two integer numbers: %d\n", mult);

    if(b==0)
    {
        printf(" Can't divide by zero\n");
    }

    if (a>b)
    {
        div = a / b;
        printf(" division of the two integer numbers (a/b): %d\n", div);
    }
    
    else
    {
        div = b / a;
        printf(" division of the two integer numbers (b/a): %d\n", div);
    }

    return 0;
}