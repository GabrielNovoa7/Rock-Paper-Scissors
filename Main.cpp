// Testing Git integration
#include <iostream>
#include "game.h"

using namespace std;

int main()
{
    bool x = true;
    int menuOption = 0;
    srand(time(NULL));

    while (x == true)
    {
        displayMenuOptions();
        cin >> menuOption;

        if (menuOption == 1) 
        {
            displayInstructions();
            displayMenuOptions();
            cin >> menuOption;
        }
        else if (menuOption == 2)
        {
            runGame();
        }
        else if (menuOption == 3)
        {
            x = false;
        }
        else
        {
            cout << "ERROR INCORRECT OPTION CHOSEN PLEASE TRY AGAIN" << endl;
            displayMenuOptions();
            cin >> menuOption;
        }
    }

    return 0;
}