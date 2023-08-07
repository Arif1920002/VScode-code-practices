// Insert element in an array in any position.

#include <stdio.h>

int main()
{
    int array[100];
    int i,n,position,value;
    scanf("Enter the size of array: %d\n", &array[n]);
    if(n>100)
    {
        printf("Array size is greater than MAX_SIZE\n");// to avoid size overflow.
    }

// To get user input for array and print it on screen first.+
    for (i=0; i<n; i++)// n = array size, i = increment decrement number. Because array starts at index 0, so i<n and not i<=n.
    {
        scanf("%d", &array[i]);
    }
    printf("The array is: ");
    for (i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }


    scanf("Enter the position to insert: %d\n", &position);
    scanf("Enter the value to insert: %d\n", &value);
    for (i= n-1; i>= position-1; i--) // (position = index - 1) ; because index starts at 0, position stars at 1.
    {
        array[i+1] = array[i];
        array[position-1] = value;
        n++;
    }

    printf("The array is: ");
    for (i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
}