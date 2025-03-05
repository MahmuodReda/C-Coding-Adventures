/*
 * general_pointers.c
 *
 * Description: This program demonstrates the use of pointers in C,
 * including pointer declaration, dereferencing, pointer arithmetic,
 * and using pointers to modify variable values. It includes examples
 * with arrays and scalar variables to illustrate pointer operations.
 *
 * Author: (Your Name)
 * Date: [Current Date]
 */

#include <stdio.h>

int main() {
    /* Example 1: Using pointers with arrays
     * ----------------------------------------
     * An array of integers is declared and initialized.
     * A pointer is then set to point to the first element of the array.
     * The pointer is used to traverse and modify the array elements.
     */

    // Declare and initialize an array of 5 integers
    int numbers[5] = {5, 10, 15, 20, 25};

    // Declare a pointer and set it to point to the first element of the array
    int *ptr = numbers;

    // Print original array elements
    printf("Original array elements:\n");
    for (int i = 0; i < 5; i++) {
        // Using pointer arithmetic: *(ptr + i) is equivalent to numbers[i]
        printf("numbers[%d] = %d\n", i, *(ptr + i));
        // Expected output for each iteration: numbers[0] = 5, numbers[1] = 10, etc.
    }

    // Modify the array elements using the pointer (e.g., multiply each element by 3)
    for (int i = 0; i < 5; i++) {
        *(ptr + i) = *(ptr + i) * 3; // Multiply each element by 3
    }

    // Print modified array elements
    printf("\nModified array elements (each element multiplied by 3):\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
        // Expected output for each iteration: numbers[0] = 15, numbers[1] = 30, etc.
    }

    /* Example 2: Using pointers with scalar variables
     * ------------------------------------------------
     * A simple integer variable is declared and a pointer is used to access
     * its address and value. The pointer is then used to change the variable's value.
     */

    // Declare an integer variable
    int value = 50;

    // Declare a pointer and store the address of 'value'
    int *pValue = &value;

    // Print the variable's value and its memory address
    printf("\nScalar variable example:\n");
    printf("Initial value: %d\n", value);      // Expected output: 50
    printf("Address of value: %p\n", (void*)&value); // Expected output: memory address of 'value'
    printf("Pointer pValue holds address: %p\n", (void*)pValue);
    printf("Value pointed by pValue: %d\n", *pValue); // Expected output: 50

    // Modify the variable's value using the pointer
    *pValue = 100;
    printf("New value after modification: %d\n", value); // Expected output: 100

    /* Example 3: Additional demonstration of pointer arithmetic
     * -----------------------------------------------------------
     * Using a pointer to traverse an array with pointer arithmetic and then
     * using a pointer increment in a while loop.
     */

    // Reset pointer to the beginning of the array 'numbers'
    ptr = numbers;

    printf("\nTraversing the modified array using pointer arithmetic:\n");
    int index = 0;
    // While the pointer points within the array (for array of size 5)
    while (index < 5) {
        printf("Element at position %d is %d\n", index, *(ptr + index));
        // Expected output: Print each element of the modified array
        index++;
    }

    return 0; // Program executed successfully
}
