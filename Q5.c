/* 5. Two numbers are input through the keyboard into two locations C and D. Write a
program to interchange the contents of C and D.*/

#include <stdio.h>

void main()
{
    int c,d,temp;
    printf("Enter two numbers c and d: \n");
    scanf("%d %d", &c, &d);

    printf("Before swapping values: c = %d, d = %d\n", c, d);

    temp =c; //temp takes c value 
    c = d;   // c takes d value but temp has c value, so c value is replaced with d value
    d = temp;// now d takes temp value, which is c value

    printf("After swapping values: c = %d, d = %d\n", c, d);


}