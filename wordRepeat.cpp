// Copyright (c) 2022 Kaitlyn Ip All rights reserved.
//
// Created by: Kaitlyn Ip
// Created on: Nov 2022
// This program repeats the word with the number of times inputted

#include <iomanip>
#include <iostream>
#include <string>

using-declarations std;

int main() {
    // this function defines the variables
    std::string integerAsString;
    int numInput;
    std::string repeat;
    std::string wordInput;

    // this function is the process to multiply a word n amount of times

    std::cout << "Enter a word: ";
    std::cin >> wordInput;
    std::cout << "Enter the amount of times you want the word to repeat: ";
    std::cin >> integerAsString;

    try {
        int numInput = std::stoi(integerAsString);

        for (int loopCounter = 1; loopCounter <= numInput; loopCounter++)
            repeat += wordInput;
        cout << repeat;
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid input.";
    }
    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
