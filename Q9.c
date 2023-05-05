//Printing a character with its ASCII value.


#include <stdio.h>

void main()
{
    int ascii_val ;
    
    printf("Enter ascii value in integer number:\n");  
    scanf("%d", &ascii_val);

    char character = (char) ascii_val;

    printf("Character whose ASCII value is %d is %c\n", ascii_val, character);
}