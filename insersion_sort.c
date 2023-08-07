/* Insertion sort algorithm is a type of algorithm that sorts an input data, typically an array, one input at a time until the whole input is sorted. */

#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of array:"); // user defined array, takes input from the user. 
    scanf("%d", &size); //here a mess happens that if you put 2 (\n), one in printf and another in scanf, it consumes the previous newline character & it takes 2 inputs form the user in the output, which is not what the code should do.

    int array[size];
    
    printf("Enter %d elements of array:\n");
    for (int i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("The given array is: ");
    for (int i=0; i<size; i++) 
    {
        printf(" %d ", array[i]);   
    }
    printf("\n");


        // The main sorting part

    for (int i=1 ; i<size; i++)
    {
        int store = array[i];
        int space = i;

            while (space>0 && array[space-1]> store) 
            // if the previous position value is greater than the temporay value in the store variable, then the previous value will move one position right and the (store) value will take that position, which is one position before the bigger value.
            {
                array[space] = array[space-1];
                space--;
            }
        array[space] = store;
    }

printf(" Sorted array: ");
for (int i=0; i<size; i++)
{
    printf(" %d ", array[i]);      
}

return 0;
}

