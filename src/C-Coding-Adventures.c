#include <stdio.h>

int main() {

    // 1. for Loop - Iterating through a fixed range (1 to 5)
    printf("for Loop:\n");

    // Initialize the loop variable 'i' to 1
    // The loop will continue as long as 'i' is less than or equal to 5
    // After each iteration, 'i' is incremented by 1
    for (int i = 1; i <= 5; i++) {
        // Print the current iteration number
        // The value of 'i' starts at 1 and increases by 1 in each loop cycle
        printf("Iteration %d\n", i);
    }

    // 2. while Loop - Continues while a condition is true (decrementing from 5)
    int j = 5; // Initialize 'j' to 5
    printf("\nwhile Loop:\n");

    // The loop will continue as long as 'j' is greater than 0
    // In each iteration, 'j' is decremented by 1
    while (j > 0) {
        // Print the current value of 'j'
        // This will print the values 5, 4, 3, 2, 1 as 'j' decrements
        printf("Iteration %d\n", j);

        // Decrease 'j' by 1 in each iteration
        // This is the action that eventually causes the loop to terminate
        j--;
    }

    // 3. do-while Loop - Executes at least once before checking the condition (decrementing from 5)
    int k = 5; // Initialize 'k' to 5
    printf("\ndo-while Loop:\n");

    // The loop body will always execute at least once
    // After the first execution, it will check if 'k' is greater than 0
    do {
        // Print the current value of 'k'
        // The loop will print 5, 4, 3, 2, 1
        printf("Iteration %d\n", k);

        // Decrease 'k' by 1 in each iteration
        // This will eventually cause the loop to stop when 'k' becomes 0
        k--;
    } while (k > 0); // The condition is checked after the loop body

    // 4. for Loop with Array - Iterating through an array of numbers
    printf("\nfor Loop with Array:\n");

    // Define an array of 5 integers
    int numbers[] = {10, 20, 30, 40, 50};

    // Use a 'for' loop to iterate through the array
    // 'i' will be used as the index to access each element in the array
    for (int i = 0; i < 5; i++) {
        // Print the value of the element at index 'i' in the array
        // This will print the values 10, 20, 30, 40, 50
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    // 5. while Loop to find first odd number - Continues until an odd number is found
    int m = 0; // Initialize 'm' to 0 (index for the 'nums' array)
    printf("\nwhile Loop to Find Odd Number:\n");

    // Define an array of numbers to search for the first odd number
    int nums[] = {2, 4, 6, 7, 10};

    // The loop will continue as long as 'm' is less than 5 (array length)
    while (m < 5) {
        // Check if the current element is odd
        if (nums[m] % 2 != 0) {
            // If the element is odd, print it and exit the loop
            // The first odd number found will be 7 at index 3
            printf("First odd number found at index %d: %d\n", m, nums[m]);
            break; // Exit the loop as we have found our first odd number
        }
        // Increment 'm' to move to the next element in the array
        m++;
    }

    // 6. Nested for Loops - Printing a square pattern using nested loops
    printf("\nNested for Loops for Square Pattern:\n");

    // Outer loop for rows
    for (int i = 0; i < 5; i++) {
        // Inner loop for columns
        // This prints '*' characters across each row
        for (int j = 0; j < 5; j++) {
            printf("* "); // Print a star in each column of the row
        }
        // After printing all stars in the row, move to the next line
        printf("\n");
    }

    // 7. do-while Loop for user input - Keeps asking for input until 0 is entered
    int number; // Declare variable to store user input
    printf("\ndo-while Loop for User Input:\n");

    // The loop will ask for input at least once and then check if the input is 0
    do {
        // Prompt the user to enter a number
        printf("Please enter a number (enter 0 to stop): ");
        // Read the user's input and store it in 'number'
        scanf("%d", &number);

        // Print the value entered by the user
        printf("You entered: %d\n", number);
    } while (number != 0); // Continue asking until the user enters 0

    return 0; // End of the program
}
