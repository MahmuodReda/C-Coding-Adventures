#include <stdio.h>   // Standard Input/Output library for printf function
#include <stdint.h>  // Library for fixed-width integer types

int main() {
    /* ==================== Variable Declarations and Printing ==================== */

    // In C, variables must be declared before they are used.
    // C provides different data types based on size and signed/unsigned properties.

    // Example 1: Unsigned 8-bit integer (0 to 255)
    uint8_t speed = 120;  // Speed in km/h (8-bit, 1 byte)
    printf("uint8_t - Speed: %u km/h\n", speed);
    // Expected output: uint8_t - Speed: 120 km/h

    // Example 2: Unsigned 16-bit integer (0 to 65,535)
    uint16_t altitude = 35000;  // Altitude in feet (16-bit, 2 bytes)
    printf("uint16_t - Altitude: %u feet\n", altitude);
    // Expected output: uint16_t - Altitude: 35000 feet

    // Example 3: Unsigned 32-bit integer (0 to 4,294,967,295)
    uint32_t file_size = 429496;  // File size in bytes (32-bit, 4 bytes)
    printf("uint32_t - File Size: %u bytes\n", file_size);
    // Expected output: uint32_t - File Size: 429496 bytes

    // Example 4: Signed 32-bit integer (-2,147,483,648 to 2,147,483,647)
    int temperature = -30;  // Temperature in Celsius (32-bit, 4 bytes)
    printf("int - Temperature: %d°C\n", temperature);
    // Expected output: int - Temperature: -30°C

    // Example 5: Single-precision floating-point number (32-bit, 4 bytes)
    float interest_rate = 4.75;  // Interest rate percentage
    printf("float - Interest Rate: %.2f%%\n", interest_rate);
    // Expected output: float - Interest Rate: 4.75%

    // Example 6: Double-precision floating-point number (64-bit, 8 bytes)
    double precise_value = 123456.789123;  // More precision than float
    printf("double - Precise Value: %.6f\n", precise_value);
    // Expected output: double - Precise Value: 123456.789123

    // Example 7: Constant Value (using `const` to define a read-only variable)
    const float gravity = 9.81;  // Earth's gravity in m/s²
    // gravity = 10.0;  // ERROR: Constants cannot be modified
    printf("constant value - Gravity: %.2f m/s²\n", gravity);
    // Expected output: constant value - Gravity: 9.81 m/s²

    /* ==================== Type Casting Examples ==================== */

    // Type casting is the process of converting a variable from one data type to another.

    // 1 - Casting float to int (removes decimal part, does NOT round)
    float pi_value = 3.14159;
    int truncated_pi = (int)pi_value;  // Only the integer part remains
    printf("Casted float to int: %d\n", truncated_pi);
    // Expected output: Casted float to int: 3

    // 2 - Casting char to int (retrieving ASCII value)
    char letter = 'Z';  // Characters in C are represented as ASCII codes
    int ascii_letter = (int)letter;  // 'Z' has ASCII value of 90
    printf("ASCII Value of %c: %d\n", letter, ascii_letter);
    // Expected output: ASCII Value of Z: 90

    // 3 - Casting double to float (reduces precision)
    double precise_pi = 3.141592653589793;  // High precision
    float approx_pi = (float)precise_pi;  // Precision loss
    printf("Double: %.15f\n", precise_pi);
    printf("Float: %.7f\n", approx_pi);
    // Expected output:
    // Double: 3.141592653589793
    // Float: 3.1415927

    // 4 - Casting int to char (convert numeric value to a character)
    int num = 65;  // ASCII value of 'A'
    char char_value = (char)num;  // Cast integer to char
    printf("Casted int to char: %c\n", char_value);
    // Expected output: Casted int to char: A

    /* ==================== Additional C Language Concepts ==================== */

    // Strings in C are character arrays, NOT objects like in other languages.
    char name[] = "Embedded Systems";  // Character array (C-style string)
    printf("String Example: %s\n", name);
    // Expected output: String Example: Embedded Systems

    // Sizeof operator: Used to determine the memory size of data types
    printf("Size of int: %lu bytes\n",(unsigned long) sizeof(int));
    printf("Size of float: %lu bytes\n",(unsigned long) sizeof(float));
    printf("Size of double: %lu bytes\n", (unsigned long) sizeof(double));
    // Expected output (depending on the system):
    // Size of int: 4 bytes
    // Size of float: 4 bytes
    // Size of double: 8 bytes

    // Boolean values: C does NOT have a built-in `bool` type in older versions.
    // Instead, we use `<stdbool.h>` or treat 0 as false and non-zero as true.
    int is_ready = 1;  // 1 = true, 0 = false
    if (is_ready) {
        printf("Boolean Example: The system is ready!\n");
        // Expected output: Boolean Example: The system is ready!
    }

    // Ternary Operator: Shorter way of writing if-else
    int x = 10, y = 20;
    int max = (x > y) ? x : y;  // If x > y, max = x; else, max = y
    printf("Max value: %d\n", max);
    // Expected output: Max value: 20

    return 0;  // Return 0 indicates successful program execution
}
