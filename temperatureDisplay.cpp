// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Marcus Wehbi
// Created on: Oct 2022
// This program displays temeprature in a variety of different scales
// It displays the different temperature scales for different reasons
// it also uses a try catch to ensure the user correctly inputs a temperature

#include <iomanip>
#include <iostream>
#include <stdlib.h>

    int main() {
    // this function compares the programs chosen number with the users
    std::string userTempString, funFact;
    // declare variable for users number as integer
    float degNewton, degRankine, degFahrenheit, userTempFloat, degReaumur;
    int userOccupation;

    std::cout << "Enter the temperature in degrees Celsius (°C) as an integer: ";
    std::cin >> userTempString;

    try{
        userTempFloat = std::stof(userTempString);
        std::cout << "The temperature scale you inputted in, was Celsius." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "You did not enter a valid temperature. Please try again." << std::endl;
        abort();
    }

    std::cout << "Enter your occupation (enter '1' if you are a scientist, or '2' if you are anything else): ";
    std::cin >> userOccupation;
    
    // userTempFloat = std::stof(userTempString);
    degNewton = userTempFloat * 0.33;
    degRankine = userTempFloat + 493.47;
    degFahrenheit = (userTempFloat * 1.8) + 32;
    switch (userOccupation) {
        case 1:
            std::cout << "Since you are scientist, you use the Newton (°N) and Rankine (°R) scale when dealing with temperatures:\n" << std::endl;
            std::cout << "The temperature in degrees Rankine is: " << degRankine << "°R. The temperature in degrees Newton is: " << degNewton << "°N.\n" << std::endl;
            break;
        case 2:
            std::cout << "Since you are not a scientist, you use either degrees Fahrenheit, or Celsius. The temperature in degrees fahrenheit is:" << degFahrenheit << "°F.\n" << std::endl;
            break;
        default:
            std::cout << "Error, invalid occupation." << std::endl;
    }
    // this function reads the temperature and says if it is hot, cold, or in between
    if (userTempFloat <= 15) {
        std::cout << "That is a cold temperature.\n" << std::endl;
    } else if (userTempFloat >= 30) {
        std::cout << "That is a warm temperature.\n" << std::endl;
    } else {
        std::cout << "That is a perfect temperature.\n" << std::endl;
    }

    degReaumur = userTempFloat * 0.8;
    std::cout << "Do you want know a fun fact (enter 'yes' or 'no'): ";
    std::cin >> funFact;
    if (funFact == "yes") {
        std::cout << "The melting and boiling points of water are 0 degrees and 80 degrees, respectively, on the Réaumur scale, commonly referred to as the 'octogesimal division,' which measures temperature.\n";
        std::cout << "The temperature in degrees Réaumur is: " << degReaumur << "°Ré.\n" << std::endl;
    } else {
        std::cout << "You just missed out on a cool fact" << std::endl;
    }
}
