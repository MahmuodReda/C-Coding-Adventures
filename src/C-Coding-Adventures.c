#include <stdio.h>   // Standard Input/Output library for printf function
#include <stdint.h>  // Library for fixed-width integer types

int main() {
    /* ==================== Arithmetic Operators ==================== */
    // Arithmetic operators are used to perform basic mathematical operations.
    int a = 15, b = 4;  // Declaring two integer variables
    printf("Arithmetic Operators:\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);  // Addition
    // Expected output: Addition: 15 + 4 = 19

    printf("Subtraction: %d - %d = %d\n", a, b, a - b);  // Subtraction
    // Expected output: Subtraction: 15 - 4 = 11

    printf("Multiplication: %d * %d = %d\n", a, b, a * b);  // Multiplication
    // Expected output: Multiplication: 15 * 4 = 60

    printf("Division: %d / %d = %d\n", a, b, a / b);  // Integer division (truncates decimal part)
    // Expected output: Division: 15 / 4 = 3

    printf("Modulus: %d %% %d = %d\n\n", a, b, a % b);  // Remainder of division (modulus)
    // Expected output: Modulus: 15 % 4 = 3


    /* ==================== Relational Operators ==================== */
    // Relational operators compare values and return 1 (true) or 0 (false).
    printf("Relational Operators:\n");
    printf("Equal: %d == %d = %d\n", a, b, a == b);  // Equal to
    // Expected output: 0 (false)

    printf("Not Equal: %d != %d = %d\n", a, b, a != b);  // Not equal to
    // Expected output: 1 (true)

    printf("Greater Than: %d > %d = %d\n", a, b, a > b);  // Greater than
    // Expected output: 1 (true)

    printf("Less Than: %d < %d = %d\n", a, b, a < b);  // Less than
    // Expected output: 0 (false)

    printf("Greater or Equal: %d >= %d = %d\n", a, b, a >= b);  // Greater than or equal to
    // Expected output: 1 (true)

    printf("Less or Equal: %d <= %d = %d\n\n", a, b, a <= b);  // Less than or equal to
    // Expected output: 0 (false)


    /* ==================== Logical Operators ==================== */
    // Logical operators are used to perform logical operations.
    int x = 1, y = 0;  // 1 represents true, 0 represents false
    printf("Logical Operators:\n");
    printf("Logical AND: %d && %d = %d\n", x, y, x && y);  // Logical AND
    // Expected output: 0 (false)

    printf("Logical OR: %d || %d = %d\n", x, y, x || y);  // Logical OR
    // Expected output: 1 (true)

    printf("Logical NOT: !%d = %d\n\n", x, !x);  // Logical NOT
    // Expected output: 0 (false)


    /* ==================== Assignment Operators ==================== */
    // Assignment operators modify variables by performing operations and storing the result.
    int c = 10;  // Initializing variable c
    printf("Assignment Operators:\n");

    c += 5;  // Equivalent to c = c + 5
    printf("Addition Assignment: c += 5 -> c = %d\n", c);
    // Expected output: c = 15

    c -= 3;  // Equivalent to c = c - 3
    printf("Subtraction Assignment: c -= 3 -> c = %d\n", c);
    // Expected output: c = 12

    c *= 2;  // Equivalent to c = c * 2
    printf("Multiplication Assignment: c *= 2 -> c = %d\n", c);
    // Expected output: c = 24

    c /= 4;  // Equivalent to c = c / 4
    printf("Division Assignment: c /= 4 -> c = %d\n", c);
    // Expected output: c = 6

    c %= 3;  // Equivalent to c = c % 3
    printf("Modulus Assignment: c %%= 3 -> c = %d\n\n", c);
    // Expected output: c = 0


    /* ==================== Increment and Decrement Operators ==================== */
    int d = 5;  // Variable initialization
    printf("Increment and Decrement Operators:\n");
    printf("Original Value: %d\n", d);
    // Expected output: 5

    d++;  // Increment (adds 1)
    printf("After Increment: %d\n", d);
    // Expected output: 6

    d--;  // Decrement (subtracts 1)
    printf("After Decrement: %d\n\n", d);
    // Expected output: 5


    /* ==================== Conditional (Ternary) Operator ==================== */
    // The ternary operator is a shortcut for if-else statements.
    int max = (a > b) ? a : b;  // If a > b, max = a; else, max = b
    printf("Conditional (Ternary) Operator:\n");
    printf("Maximum: %d\n", max);
    // Expected output: 15

    // Additional Example: Checking if a number is even or odd
    int num = 7;
    printf("Number %d is %s\n", num, (num % 2 == 0) ? "Even" : "Odd");
    // Expected output: Number 7 is Odd

    return 0;  // Return 0 indicates successful program execution
}
