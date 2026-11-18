
#include <iostream>  // Provides input and output functionality
#include <string>    // Allows the use of string variables

int main()
{
    // Declare two integer variables for arithmetic operations
    int a = 17, b = 5;

    // -------------------- Arithmetic Operators --------------------
    std::cout << "--- Arithmetic ---\n";

    // Perform basic arithmetic operations
    std::cout << a << " + " << b << " = " << a + b << '\n';
    std::cout << a << " - " << b << " = " << a - b << '\n';
    std::cout << a << " * " << b << " = " << a * b << '\n';

    // Integer division removes the decimal portion of the result
    std::cout << a << " / " << b << " = " << a / b
              << " (Integer division)\n";

    // Modulus operator (%) returns the remainder of a division
    std::cout << a << " % " << b << " = " << a % b
              << " (Remainder)\n";


    // -------------------- Increment Operators --------------------
    std::cout << "\n--- Increment: prefix vs postfix ---\n";

    int x = 10;

    // Post-increment: returns the current value before increasing x
    int old = x++;
    std::cout << "x++ returned " << old << ", now x = " << x << '\n';

    // Pre-increment: increases x first, then returns the updated value
    int now = ++x;
    std::cout << "++x returned " << now << ", now x = " << x << '\n';


    // -------------------- Compound Assignment Operators --------------------
    std::cout << "\n--- Compound assignment ---\n";

    int total = 100;

    // Update the variable using compound assignment operators
    total += 20;  // Equivalent to total = total + 20
    total -= 5;   // Equivalent to total = total - 5
    total *= 2;   // Equivalent to total = total * 2
    total /= 10;  // Equivalent to total = total / 10

    // Display the final value after all operations
    std::cout << "total = " << total << '\n';


    // -------------------- Comparison and Logical Operators --------------------

    // boolalpha displays Boolean values as true or false instead of 1 or 0
    std::cout << std::boolalpha << "\n--- Comparison & Logical ---\n";

    // Comparison operators evaluate relationships between values
    std::cout << "a > b:            " << (a > b) << '\n';

    // Logical AND (&&): true only when both conditions are true
    std::cout << "a == 17 && b < 3: " << (a == 17 && b < 3) << '\n';

    // Logical OR (||): true when at least one condition is true
    std::cout << "a == 17 || b < 3: " << (a == 17 || b < 3) << '\n';

    // Logical NOT (!): reverses a Boolean result
    std::cout << "!(a > b):         " << !(a > b) << '\n';


    // -------------------- Ternary Operator --------------------
    std::cout << "\n--- Ternary ---\n";

    // Check whether a is even or odd using the conditional operator
    std::string parity = (a % 2 == 0) ? "even" : "odd";

    // Display the result
    std::cout << a << " is " << parity << '\n';


    // -------------------- Bitwise Operators --------------------
    // Demonstrate bitwise operations using binary representations:
    // 6 = 0110 and 3 = 0011

    std::cout << "\n--- Bitwise (on 6 = 0110 and 3 = 0011) ---\n";

    // Bitwise AND (&): compares bits and returns 1 when both are 1
    std::cout << "6 & 3  = " << (6 & 3) << '\n';   // 0010 = 2

    // Bitwise OR (|): returns 1 when at least one corresponding bit is 1
    std::cout << "6 | 3  = " << (6 | 3) << '\n';   // 0111 = 7

    // Bitwise XOR (^): returns 1 when corresponding bits are different
    std::cout << "6 ^ 3  = " << (6 ^ 3) << '\n';   // 0101 = 5

    // Left shift (<<): shifts the bits one position to the left
    std::cout << "6 << 1 = " << (6 << 1) << '\n';  // 1100 = 12


    // Return 0 to indicate that the program executed successfully
    return 0;
}
