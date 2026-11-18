
#include <iostream>  // Provides input and output functionality

// Function that determines a letter grade based on a numerical score
char letterGrade(int score)
{
    // Check the score and return the corresponding letter grade
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}

// Function that identifies whether a day is a weekday or weekend
void describeDay(int day)
{
    // Use a switch statement to evaluate the day number
    switch (day)
    {
        // Day 1 (Sunday) and day 7 (Saturday) are weekends
        case 1:
        case 7:
            std::cout << "Weekend\n";
            break;

        // Days 2 through 6 are weekdays
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            std::cout << "Weekday\n";
            break;

        // Handle numbers outside the valid day range
        default:
            std::cout << "Invalid day\n";
    }
}

int main()
{
    // Declare an array containing five numerical scores
    int scores[] = {95, 83, 71, 64, 40};

    // Range-based for loop: iterate through each score in the array
    for (int s : scores)
    {
        // Display each score and its corresponding letter grade
        std::cout << "Score " << s << " -> "
                  << letterGrade(s) << '\n';
    }

    std::cout << '\n';

    // Traditional for loop: check day numbers from 0 through 7
    for (int d = 0; d <= 7; d++)
    {
        // Display the current day number
        std::cout << "Day " << d << " : ";

        // Call the function to determine the type of day
        describeDay(d);
    }

    // Initialize a variable inside the if statement
    // Check whether the temperature is greater than 25 degrees
    if (int temp = 28; temp > 25)
    {
        std::cout << "\nIt's hot (" << temp << " C)\n";
    }
    else
    {
        // Display this message if the temperature is 25 or below
        std::cout << "\nIt's fine (" << temp << " C)\n";
    }

    // Return 0 to indicate successful program execution
    return 0;
}

#include <iostream>  // Provides input and output functionality

// Function that determines a letter grade based on a numerical score
char letterGrade(int score)
{
    // Check the score and return the corresponding letter grade
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}

// Function that identifies whether a day is a weekday or weekend
void describeDay(int day)
{
    // Use a switch statement to evaluate the day number
    switch (day)
    {
        // Day 1 (Sunday) and day 7 (Saturday) are weekends
        case 1:
        case 7:
            std::cout << "Weekend\n";
            break;

        // Days 2 through 6 are weekdays
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            std::cout << "Weekday\n";
            break;

        // Handle numbers outside the valid day range
        default:
            std::cout << "Invalid day\n";
    }
}

int main()
{
    // Declare an array containing five numerical scores
    int scores[] = {95, 83, 71, 64, 40};

    // Range-based for loop: iterate through each score in the array
    for (int s : scores)
    {
        // Display each score and its corresponding letter grade
        std::cout << "Score " << s << " -> "
                  << letterGrade(s) << '\n';
    }

    std::cout << '\n';

    // Traditional for loop: check day numbers from 0 through 7
    for (int d = 0; d <= 7; d++)
    {
        // Display the current day number
        std::cout << "Day " << d << " : ";

        // Call the function to determine the type of day
        describeDay(d);
    }

    // Initialize a variable inside the if statement
    // Check whether the temperature is greater than 25 degrees
    if (int temp = 28; temp > 25)
    {
        std::cout << "\nIt's hot (" << temp << " C)\n";
    }
    else
    {
        // Display this message if the temperature is 25 or below
        std::cout << "\nIt's fine (" << temp << " C)\n";
    }

    // Return 0 to indicate successful program execution
    return 0;
}
