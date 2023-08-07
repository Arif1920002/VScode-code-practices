//To insert two custom elements in an array.

#include <stdio.h>
int main() {
    int array[100]; // Declare an array of size 100
    int n, position, value1, value2;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    if (n > 100) {
        printf("Array size is greater than MAX_SIZE\n");
        return 1; // Exit the program if the size is too large
    }

    // To get user input for array
    printf("Enter the elements of array:\n");
    for (int i = 0; i < n ; i++) {
        scanf("%d", &array[i]);
    }

    printf("The array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    printf("\n\nEnter the position to insert the first value: ");
    scanf("%d", &position);

    if (position < 1 || position > n + 1) {
        printf("Invalid position for insertion.\n");
        return 1; // Exit the program if position is invalid
    }

    printf("Enter the first value to insert: ");
    scanf("%d", &value1);

    // Shift elements to make space for the new element
    for (int i = n - 1; i >= position - 1; i--) {
        array[i + 1] = array[i];
    }

    // Insert the first value at the specified position
    array[position - 1] = value1;
    n++; // Increase the size of the array


    printf("\nEnter the position to insert the second value: ");
    scanf("%d", &position);

    printf("Enter the second value to insert: ");
    scanf("%d", &value2);

    if (position < 1 || position > n + 1) {
        printf("Invalid position for insertion.\n");
        return 1; // Exit the program if position is invalid
    }

    // Shift elements to make space for the new element
    for (int i = n - 1; i >= position - 1; i--) {
        array[i + 1] = array[i];
    }

    // Insert the second value at the specified position
    array[position - 1] = value2;
    n++; // Increase the size of the array

    // Print the modified array
    printf("\n\nThe modified array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
