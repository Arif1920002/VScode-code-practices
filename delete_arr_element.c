// Delete two elements form an array

#include <stdio.h>

int main() {
    int array[100]; // Declare an array of size 100
    int n, position1, position2;

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
    
    
    printf("\nEnter the position to delete the first value: ");
    scanf("%d", &position1);

    if (position1 < 1 || position1 > n) {
        printf("Invalid position for deletion.\n");
        return 1; // Exit the program if position is invalid
    }

    printf("Enter the position to delete the second value: ");
    scanf("%d", &position2);

    if (position2 < 1 || position2 > n) {
        printf("Invalid position for deletion.\n");
        return 1; // Exit the program if position is invalid
    }

    // Shift elements to delete the first value
    for (int i = position1 - 1; i < n - 1; i++) {
        array[i] = array[i + 1];
    }
    n--; // Decrease the size of the array after the first deletion

    // Shift elements to delete the second value
    for (int i = position2 - 1; i < n - 1; i++) {
        array[i] = array[i + 1];
    }
    n--; // Decrease the size of the array after the second deletion

    // Print the modified array
    printf("The modified array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
