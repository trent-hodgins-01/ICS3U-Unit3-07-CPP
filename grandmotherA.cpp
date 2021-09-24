// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 09/24/2021
// This is a GrandmotherA program
// The user enters in their age
// The program tells them if they can date their grandchild

#include <iostream>

int main() {
    // this function checks to see if the user is allowed to date her grandchild
    std::string age_string;
    int age_as_int;

    // input
    std::cout << "Enter in your age: ";
    std::cin >> age_string;
    std::cout << "" << std::endl;

    // process and output
    try {
        // convert string to int
        age_as_int = std::stoi(age_string);

        if (age_as_int >= 25 && age_as_int <= 40) {
         std::cout << "you are allowed to date my grandchild." << std::endl;
        } else if (age_as_int < 25) {
            std::cout << "you are too young" << std::endl;
        } else if (age_as_int > 40) {
            std::cout << "you are too old" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "You didn’t enter in a number" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
