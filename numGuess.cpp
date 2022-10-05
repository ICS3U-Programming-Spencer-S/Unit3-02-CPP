// Copyright (c) 2022 Spencer Scarlett All rights reserved.
// .
// Created by: Spencer Scarlett
// Date: Oct 5, 2022
//  Number guessing program

#include <iostream>

int main() {
    // This is the correct answer function
    int correctAnswer = 9, guessAnswer;

    // Requests guess from the user
    std::cout << "This is a number guessing game";
    std::cout << "Choose a number between 1-10 \n >> ";
    std::cin >> guessAnswer;
    std::cout << "" << std::endl;

    // spacer
    std::cout << "\n";

    // Answer checking, seeing if user input is correct
    if (guessAnswer == correctAnswer) {
        std::cout << "You got the right answer!";
    } else {
        std::cout << "You got the wrong answer!";
    }
    // spacer
    std::cout << "\n";
}
