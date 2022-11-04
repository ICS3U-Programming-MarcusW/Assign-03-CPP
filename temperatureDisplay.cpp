// Copyright (c) 2022 Immaculata HS All rights reserved.
// Created by: Marcus Wehbi
// Created on: Oct 2022
// This program displays temperature in a variety of different scales
// It displays the different temperature scales for different reasons
// For example, based on the users occupation


#include <iomanip>
#include <iostream>
#include <cstdlib>

int main() {
    // This function converts a users temperature form celsius to many others,
    // Including fahrenheit, newton, rankine and more
    // Declare string variables (user input for temp, and input for a fun fact)
    std::string userTempString, funFact;
    // Declare variables for temperature scales as floats
    float degNewton, degRankine, degFahrenheit, userTempFloat, degReaumur;
    // Declare the occupation as integer for switch case
    int userOccupation;
    // Get the users temperature in degrees celsius
    std::cout << "Enter the temperature in degrees Celsius (°C) as an ";
    std::cout << "integer: ";
    std::cin >> userTempString;
    // Use a try catch to make sure th eusers properly inputs the temperature
    try {
        // Convert the users input into a float for conversions
        userTempFloat = std::stof(userTempString);
        // Message if program runs properly
        std::cout << "The temperature scale you inputted in, was Celsius."
        << std::endl;
    } catch (std::invalid_argument) {
        // Message if error is encountered
        std::cout << "You did not enter a valid temperature. Please try again."
        << std::endl;
        // Function to end program
        exit(1);
    }
    // Get the users occupation as an integer
    std::cout << "Enter your occupation (enter '1' if you are a scientist, or";
    std::cout << " '2' if you are anything else): ";
    std::cin >> userOccupation;

    // Convert to different temperature scales
    degNewton = userTempFloat * 0.33;
    degRankine = userTempFloat * 1.8 + 491.67;
    degFahrenheit = (userTempFloat * 1.8) + 32;
    // Use a switch case to display different temperature scales
    // according to their occupation
    switch (userOccupation) {
        case 1:
            // Display in degrees newton and rankine if they are a scientist
            std::cout << "As you are a scientist, you use the Newton (°N) ";
            std::cout << "and ";
            std::cout << "Rankine (°R) scale when dealing with temperatures:\n"
            << std::endl;
            std::cout << "The temperature in degrees Rankine is: "
            << std::fixed << std::setprecision(2)
            << degRankine << "°R. The temperature in degrees Newton is: "
            << std::fixed << std::setprecision(2)
            << degNewton << "°N.\n" << std::endl;
            break;
        case 2:
            // Display in degrees fahrenheit if they have any other occupation
            std::cout << "Since you are not a scientist, you use either";
            std::cout << " degrees";
            std::cout << " Fahrenheit, or Celsius. The temperature in degrees";
            std::cout << " fahrenheit is: "
            << std::fixed << std::setprecision(2)
            << degFahrenheit << "°F.\n" << std::endl;
            break;
        default:
            // Default case if they enter anything else
            std::cout << "Error, invalid occupation." << std::endl;
    }
    // check the temperature and says if it is hot, cold, or in between
    if (userTempFloat <= 15) {
        std::cout << "That is a cold temperature.\n" << std::endl;
    } else if (userTempFloat >= 30) {
        std::cout << "That is a warm temperature.\n" << std::endl;
    } else {
        std::cout << "That is a perfect temperature.\n" << std::endl;
    }
    // Convert to a different temp scale for a fun fact
    degReaumur = userTempFloat * 0.8;
    // Ask the user if they would like to know a fun fact
    // Get input
    std::cout << "Do you want know a fun fact (enter 'yes' or 'no'): ";
    std::cin >> funFact;
    if (funFact == "yes") {
        // If they say yes, display in degrees reaumur
        std::cout << "The melting and boiling points of water are 0 degrees";
        std::cout << " and ";
        std::cout << "80 degrees, respectively, on the Réaumur scale,";
        std::cout << " commonly ";
        std::cout << "referred to as the 'octogesimal division,' which";
        std::cout << " measures";
        std::cout << " temperature.\n";
        std::cout << "The temperature in degrees Réaumur is: "
        << std::fixed << std::setprecision(2)
        << degReaumur << "°Ré.\n" << std::endl;
    } else {
        // Otherwise, do no tell them a fun fact
        std::cout << "You just missed out on a cool fact." << std::endl;
    }
}
