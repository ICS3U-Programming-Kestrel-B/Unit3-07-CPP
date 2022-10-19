// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by: KestrelBryce
// Created on: Oct 19, 2022
// This program asks for your age and
// grandparents tell you if you are
// allowed to date their grandchild

#include <cmath>
#include <cstdlib>
#include <iostream>
#include <string>

int main() {
    // Declaring variables
    std::string userAgeString;
    int userAgeInt;
    float userAgeFloat;

    // Introductory paragraph
    std::cout << "This program asks for your age and\n";
    std::cout << "grandparents tell you if you are\n";
    std::cout << "allowed to date their grandchild\n";
    std::cout << "\n";

    // Get userAgeString from user
    std::cout << "Enter your age: ";
    std::cin >> userAgeString;
    std::cout << "\n";

    // Process
    // Checking that userAgeString is not a decimal
    if (userAgeFloat = std::stof(userAgeString)) {
        std::cout << "Please do not enter a decimal.\n";
        std::cout << "\n";
    } else {
        std::cout << "Your age is not a decimal.\n";
        std::cout << "\n";
    }

    // Checking that userAgeString is an int
    try {
        userAgeInt = std::stoi(userAgeString);
    } catch (std::invalid_argument) {
        std::cout << "Please enter a valid number. ";
        std::cout << userAgeString << " ";
        std::cout << "is not valid.\n";
        std::cout << "\n";
    }

    // Checking that userAgeString isn't a float
    try {
        userAgeFloat != std::stoi(userAgeString);
    } catch (std::invalid_argument) {
        std::cout << "Please do not enter a decimal.\n";
        std::cout << "\n";
    }

        // Checking that userNumInt isn't negative
    if (userAgeInt < 0) {
        std::cout << "Please do not enter a negative number. ";
        std::cout << userAgeInt << " is not valid.\n";
        std::cout << "\n";
    } else {
        std::cout << "Your age is not negative.\n";
        std::cout << "\n";
    }

    // Checking that userAgeInt isn't zero
    if (userAgeInt == 0) {
        std::cout << "Please do not enter zero.\n";
        std::cout << "\n";
    } else {
        std::cout << "Your age is not zero.\n";
        std::cout << "\n";
    }

    // Output
    // Checking to see if grandchild can be dated
    if (userAgeInt > 25 && userAgeInt < 40) {
        std::cout << "You are in the right age range. Congratulations :)\n";
    } else {
        std::cout << "You are not in the right age range. Sorry :(\n";
    }
}
