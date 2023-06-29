#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));  // Initialize random seed based on current time

    std::string choices[3] = { "rock", "paper", "scissors" };
    int computerChoice = rand() % 3;

    std::string userChoice;
    std::cout << "\nWelcome to Rock, Paper, Scissors!\n" << std::endl;
    std::cout << "Enter your choice (rock, paper, or scissors): ";
    std::cin >> userChoice;

    std::cout << "You chose: " << userChoice << std::endl;
    std::cout << "Computer chose: " << choices[computerChoice] << std::endl;
    
    if (userChoice == choices[computerChoice]) {
        std::cout << "It's a tie!" << std::endl;
    } else if (
        (userChoice == "rock" && choices[computerChoice] == "scissors") ||
        (userChoice == "paper" && choices[computerChoice] == "rock") ||
        (userChoice == "scissors" && choices[computerChoice] == "paper")
    ) {
        std::cout << "Congratulations! You win!" << std::endl;
    } else {
        std::cout << "Computer wins! Better luck next time." << std::endl;
    }

    return 0;
}
