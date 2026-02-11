#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "game.h"
using namespace std;

void displayInstructions() // Used to display the instructions on how to play rock paper scissors.
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

void displayMenuOptions() // menu options so that the user can run through the program.
{
    cout << "        MENU\n 1 : How to Play?\n 2 : Start Game\n 3 : End Game\n";
}

void runGame() // actual function where the game is going to be ran through.
{
    int cpuSelection, userSelection;
    cpuSelection = rand() % 3 + 1;//int num = rand() % range + min_value;
    
    cout << "Rock: 1\nPaper: 2\nScissors: 3\nSelect your option: ";
    cin >> userSelection;

    while (userSelection == (1 | 2 | 3))
    {
        cout << "Invalid Option Selected, Please try again: ";
        cin >> userSelection;
    }
    
}

