// Testing Git integration
#include <iostream>
#include "game.h"

using namespace std;

int main()
{
    bool x = true;
    int menuOption;
    srand(time(NULL));

    while (x == true)
    {
        displayMenuOptions();
        cin >> menuOption;

        switch (menuOption)
        {
        case 1:
            displayInstructions();
            break;
        case 2:
            runGame();
            break;
        case 3:
            x = false;
            break;
        default:
            cout << "ERROR INCORRECT OPTION CHOSEN PLEASE TRY AGAIN" << endl;
            break;
        }
    }
    return 0;
}