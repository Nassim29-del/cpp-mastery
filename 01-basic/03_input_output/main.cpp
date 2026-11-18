
#include <iostream>  // Provides input and output functionality
#include <iomanip>   // Provides formatting tools for output
#include <limits>    // Provides numeric limits for input validation
#include <string>    // Allows the use of string variables

int main()
{
    // Declare variables to store the user's information
    std::string fullName;
    int age = 0;

    // Ask the user to enter their full name
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullName);

    // Ask the user to enter their age
    std::cout << "Enter your age: ";

    // Validate the age input to ensure it is a non-negative integer
    while (!(std::cin >> age) || age < 0) {

        // Clear the error state if the input is invalid
        std::cin.clear();

        // Discard the remaining characters from the input buffer
        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(), '\n'
        );

        // Ask the user to enter a valid age again
        std::cout << "Invalid. Enter a non-negative whole number: ";
    }

    // Display a personalized greeting with the user's information
    std::cout << "\nHello, " << fullName
              << "! You are " << age << " years old.\n\n";

    // Format floating-point numbers to display exactly two decimal places
    std::cout << std::fixed << std::setprecision(2);

    // Display a formatted table header using left and right alignment
    std::cout << std::left << std::setw(12) << "Item"
              << std::right << std::setw(10) << "Price" << '\n';

    // Display the first item and its price
    std::cout << std::left << std::setw(12) << "Coffee"
              << std::right << std::setw(10) << 3.5 << '\n';

    // Display the second item and its price
    std::cout << std::left << std::setw(12) << "Sandwich"
              << std::right << std::setw(10) << 8.25 << '\n';

    // Indicate that the program finished successfully
    return 0;
}
