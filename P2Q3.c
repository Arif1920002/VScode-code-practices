// 3. Find out if the input is an alphabet using conditional operator.

#include <stdio.h>

int main ()
{
    char input;
    printf ("Enter a character:\n ");           
    scanf("%c", &input);

    (input>= 'a' && input<= 'z') || (input>= 'A' && input<= 'Z') 

     	? 	printf("\n%c is an alphabet\n",input)
        :    printf("\n%c is not an alphabet\n",input);

        return 0; 
}