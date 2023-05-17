/* 2. Find out if a number is odd or even using conditional operator.*/


#include<stdio.h>

void main()
{
    int a;
    printf("Enter a number:\n");  //accepting a number from the user
    scanf("%d",&a);
    if(a%2==0) 
    {
        printf("Number is even\n");
    }
    else 
    {
        printf("Number is odd\n");
    }
    
}