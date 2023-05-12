/* 1. Find out the largest between three numbers using conditional operator.*/

#include<stdio.h>

void main()
{
    int a,b,c;

    printf("Enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
    {
        printf("a is the largest\n", a);
    }
    else if(b>a && b>c)
    {
        printf("b is the largest\n", b);
    }

    else
    {
        printf("c is the largest\n", c);
    }
}