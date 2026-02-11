#include <iostream>
#include <string>
#include <random>
#include "game.h"
using namespace std;

void displayInstructions()
{
    cout << "ROCK PAPER SCISSORS - HOW TO PLAY\n"
        << "----------------------------------\n"
        << "This is a game between you and the computer.\n"
        << "Each round, you will choose Rock, Paper, or Scissors.\n"
        << "The computer will also randomly choose one option.\n\n"
        << "The winner is decided by the following rules:\n"
        << "Rock beats Scissors.\n"
        << "Scissors beats Paper.\n"
        << "Paper beats Rock.\n\n"
        << "If both choices are the same, the round is a tie.\n"
        << "After each round, the result will be displayed.\n"
        << "You can continue playing as many rounds as you like.\n\n\n";
}

void displayMenuOptions()
{
    cout << "        MENU\n 1 : How to Play?\n 2 : Start Game\n 3 : End Game\n";
}

void runGame()
{
    int cpuSelection, userSelection;
    cpuSelection;
}

