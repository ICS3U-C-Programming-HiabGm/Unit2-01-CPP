// Created by: Hiab G
// Date: Wed, Feb. 25th
// This program calculates the area and perimeter of a rectangle with user input



#include <iostream> // For input/output
int main() {
// Declare variables for length, width, area, and perimeter
double length, width, area, perimeter;

// Get user input for length
std::cout << "Enter the length of the rectangle: ";
std::cin >> length;

// Get user input for width
std::cout << "Enter the width of the rectangle: ";
std::cin >> width;

 // Calculate area and perimeter
area = length * width;
perimeter = 2 * (length + width);

// Display the results
std::cout << "The area of the rectangle is: " << area << std::endl;
std::cout << "The perimeter of the rectangle is: " << perimeter << std::endl;

return 0;
}



