#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "tools.h"

void start_table_hockey(const std::string& playerName) {
    std::srand(std::time(0));
    int playerScore = 0;
    int computerScore = 0;
    int winningScore = 3;

    std::cout << "🏒 Welcome to Table Hockey, " << playerName << "!" << std::endl;

    while (playerScore < winningScore && computerScore < winningScore) {
        std::cout << "\nShoot the puck! (press Enter) ";
        std::cin.ignore();

        int outcome = std::rand() % 3;  // 0: miss, 1: save, 2: goal

        if (outcome == 2) {
            std::cout << "🥅 Goal! You scored!\n";
            playerScore++;
        } else if (outcome == 1) {
            std::cout << "🧤 Save! Computer blocked your shot!\n";
        } else {
            std::cout << "💨 You missed the goal!\n";
        }

        // Computer's turn
        int cpuShot = std::rand() % 3;
        if (cpuShot == 2) {
            std::cout << "🤖 Computer scores a goal!\n";
            computerScore++;
        } else if (cpuShot == 1) {
            std::cout << "🧤 You blocked the computer's shot!\n";
        } else {
            std::cout << "💨 Computer missed the goal!\n";
        }

        std::cout << "Score: " << playerName << " " << playerScore << " - 🤖 " << computerScore << "\n";
    }

    if (playerScore > computerScore) {
        std::cout << "\n🏆 Congrats, " << playerName << "! You win!\n";
    } else {
        std::cout << "\n💀 Oof! Computer wins. Better luck next time!\n";
    }
}

