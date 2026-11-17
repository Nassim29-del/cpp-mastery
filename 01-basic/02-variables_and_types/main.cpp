
/*
 * File Name: variables_and_data_types.cpp
 * Description: Demonstrates fundamental C++ data types,
 *              variable initialization, constants, sizeof,
 *              type casting, and arithmetic operations.
 * Author: Nasim Bidel
 * Language: C++
 */

#include <iostream>
#include <string>

int main()
{
    // ------------------------------------------------
    // 1. Basic Data Types and Variable Initialization
    // ------------------------------------------------

    int age = 21;                   // Integer: stores whole numbers.
    double gpa = 3.75;              // Double: stores decimal numbers.
    char grade = 'A';               // Char: stores a single character.
    bool isenrolled = true;         // Boolean: stores true or false.
    std::string name = "Nasim";     // String: stores text.

    // Uniform initialization using curly braces.
    int year{2026};

    // ------------------------------------------------
    // 2. Automatic Type Deduction (auto)
    // ------------------------------------------------

    auto score = 95.5;              // Automatically deduced as double.
    auto letter = 'B';              // Automatically deduced as char.

    // ------------------------------------------------
    // 3. Constants
    // ------------------------------------------------

    const double PI = 3.14159;      // const: value cannot be modified.
    constexpr int DAYS_IN_WEEK = 7; // constexpr: compile-time constant.

    // ------------------------------------------------
    // 4. Displaying Variable Values
    // ------------------------------------------------

    std::cout << "Name: " << name
              << ", Age: " << age
              << ", Year: " << year << '\n';

    std::cout << "GPA: " << gpa
              << ", Grade: " << grade << '\n';

    // std::boolalpha displays Boolean values as true or false.
    std::cout << std::boolalpha
              << "Enrolled: " << isenrolled << '\n';

    std::cout << "Score (auto): " << score
              << ", Letter (auto): " << letter << '\n';

    std::cout << "PI: " << PI
              << ", Days in week: " << DAYS_IN_WEEK << "\n\n";

    // ------------------------------------------------
    // 5. Memory Size of Different Data Types
    // ------------------------------------------------

    // sizeof returns the memory size of a type in bytes.
    std::cout << "Size of (char)   = " << sizeof(char) << '\n';
    std::cout << "Size of (int)    = " << sizeof(int) << '\n';
    std::cout << "Size of (double) = " << sizeof(double) << '\n';
    std::cout << "Size of (bool)   = " << sizeof(bool) << '\n';

    // ------------------------------------------------
    // 6. Type Casting (Converting Data Types)
    // ------------------------------------------------

    double price = 9.99;

    // static_cast converts the double value into an integer.
    // The decimal portion is discarded (not rounded).
    int whole = static_cast<int>(price);

    std::cout << "Static cast <int>(9.99) = "
              << whole << '\n';

    // ------------------------------------------------
    // 7. Arithmetic Operations and Division
    // ------------------------------------------------

    int a = 7, b = 2;

    // Integer division: the decimal portion is discarded.
    std::cout << "7 / 2 (int)    = " << a / b << '\n';

    // Convert one operand to double to perform floating-point division.
    std::cout << "7 / 2 (double) = "
              << static_cast<double>(a) / b << '\n';

    // Return 0 to indicate successful program execution.
    return 0;
}
