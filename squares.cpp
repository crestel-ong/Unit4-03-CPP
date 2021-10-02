// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: September 2021
// This is the squares program in c++

#include <iostream>
#include <string>
#include <cmath>         // power

int main() {
    // this function squares the numbers from 0 to whatever...
    // number before the number you entered

    // declaring
    std::string userInputAsString;
    float userInputAsFloat;
    int userInputAsInteger;
    int squared = 0;
    int counter;

    // input
    std::cout << "Enter an integer >= 0: ";
    std::cin >> userInputAsString;

    // process and output
    try {
        // convert string to integer and float
        userInputAsInteger = std::stoi(userInputAsString);
        userInputAsFloat = std::stof(userInputAsString);

        // process and output
        if (userInputAsInteger >= 0) {
            if (userInputAsFloat == userInputAsInteger) {
                for (counter = 0; counter <
                    userInputAsInteger + 1 ; counter ++) {
                    squared = pow(counter, 2);
                    std::cout << counter << "² = "
                    << squared << std::fixed << std::endl;
                    }
            } else {
                std::cout << "You did not enter an integer." << std::endl;
            }
        } else {
            std::cout << "You did not enter a postive integer." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "You did not enter an integer." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
