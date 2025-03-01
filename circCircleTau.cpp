// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: Feb 28th, 2025
// This program is requesting the radius
// of a circle in cm. It then calculates and
// displays the circumference using tau
#include <iostream>

int main() {
    // determine the constants
    const float TAU = 6.28;

    // determine the variables
    float radius, circumference;

    // get the radius from the user
    std::cout << "Enter the radius (mm): ";
    std::cin >> radius;

    // Calculate the circumference using tau
    circumference = TAU * radius;

    // display the circumference to the user
    std::cout << "\n";
    std::cout << "Circumference = " << circumference << " cm" << std::endl;
}
